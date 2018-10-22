#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
	int i, j;
	vector<pair<int, int> > vec;
	while (cin)
	{
		cin >> i >> j;
		if (cin)
		{
			vec.push_back(make_pair(i, j));
		}
	}

	for (vector<pair<int, int> >::size_type i = 0; i < vec.size(); ++i)
	{
		if (vec[i].second == 0) {
			if (vec.size() == 1)
				vec[i].first = 0;
			else
			{
				vec.erase(vec.begin() + i);
				--i;
			}
		} else {
			vec[i].first = vec[i].first * vec[i].second;
			vec[i].second -= 1;
		}
	}

	cout << vec.begin()->first << " " << vec.begin()->second;
	for (vector<pair<int, int> >::iterator it = vec.begin() + 1; it != vec.end(); ++it)
	{
		cout << " " << it->first << " " << it->second;
	}
	return 0;
}