#include <iostream>
#include<string>
using namespace std;

int main()
{
    string a, b;
    int arr[100][100];
    while (getline(cin, a)) {
        getline(cin, b);

        for (int i = 0; i <= a.length(); i++)
            arr[i][0] = 0;
        for (int j = 0; j <= b.length(); j++)
            arr[0][j] = 0;

        for (int i = 1; i <= a.length(); i++) {
            for (int j = 1; j <= b.length(); j++) {
                if (a[i - 1] == b[j - 1]) arr[i][j] = arr[i - 1][j - 1] + 1;
                else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }
        cout << arr[a.length()][b.length()] << endl;
    }
    system("pause");
    return 0;
}
