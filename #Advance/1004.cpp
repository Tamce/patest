#include <iostream>
#include <vector>
using namespace std;

int result[101];
int maxd = -1;
vector<int> t[101];
void dfs(int id, int depth) {
  if (t[id].size() == 0) {
    result[depth]++;
    maxd = max(maxd, depth);
    return;
  }
  for (auto it : t[id]) {
    dfs(it, depth + 1);
  }
}
int main()
{
  int n, m;
  scanf("%d%d", &n, &m);
  
  int id, k, idk;
  for (int i = 0; i < m; ++i) {
    scanf("%d%d", &id, &k);
    while (k-- > 0) {
      scanf("%d", &idk);
      t[id].push_back(idk);
    }
  }
  
  dfs(1, 0);
  printf("%d", result[0]);
  for(int i = 1; i <= maxd; ++i)
    printf(" %d", result[i]);
  return 0;
}
