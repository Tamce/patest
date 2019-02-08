#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int e[501][501];
int w[501];
int wt[501];
int dis[501];
int num[501];
bool visit[501];
int inf = INT_MAX;
int main()
{
  int m,n,c1,c2;
  fill((int*)e, (int*)e + 501 * 501, inf);
  fill(dis, dis + 501, inf);
  scanf("%d%d%d%d", &m, &n, &c1, &c2);
  for (int i = 0; i < m; ++i)
    scanf("%d", &w[i]);
  int a,b,c;
  for (int i = 0; i < n; ++i) {
    scanf("%d%d%d", &a, &b, &c);
    e[a][b] = e[b][a] = c;
  }
  
  wt[c1] = w[c1];
  num[c1] = 1;
  dis[c1] = 0;
  for (int i = 0; i < m; ++i) {
    int u = -1, mind = inf;
    for (int j = 0; j < m; ++j){
      // 先找集合外最近距离的点
      if (visit[j] == false && dis[j] < mind) {
        u = j;
        mind = dis[j];
      }
    }
    if (u == -1) break;
    visit[u]= true;
    // 然后求从这个点出发的其他点的距离
    for (int v = 0; v < m; ++v) {
      if (visit[v] == false && e[u][v] < inf) {
        if (dis[u] + e[u][v] < dis[v]) {
          dis[v] = dis[u] + e[u][v];
          num[v] = num[u];
          wt[v] = wt[u] + w[v];
        } else if (dis[u] + e[u][v] == dis[v]) {
          // 已经从别的地方来过这里了
          num[v] = num[u] + num[v];
          if (wt[u] + w[v] > wt[v])
            wt[v] = wt[u] + w[v];
        }
      }
    }
  }
  printf("%d %d", num[c2], wt[c2]);
  return 0;
}
