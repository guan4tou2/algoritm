
#include <iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        vector<pair<int, int>> times;
        int s, f, count = 0;
        while (cin >> s >> f && s + f)
            times.push_back(make_pair(f, s));

        sort(times.begin(), times.end());
        int endtime = 0;
        for (int i = 0; i < times.size(); i++)
            if (endtime <= times.at(i).second) {
                endtime = times.at(i).first;
                count++;
            }
        cout << count << endl;
    }

    system("pause");
    return 0;
}
