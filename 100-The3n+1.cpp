#include <iostream>
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b
int main()
{
    using namespace std;
    int a, b, maxLen ;
//  freopen("data.in", "r", stdin);
//    freopen("data.out", "w", stdout);
    while(cin >> a >> b)
    {
        maxLen = 1;
        int m = min(a,b);
        int n = max(a,b);
        for(int i = m; i <= n; i++)
        {
            int len = 1;
            int temp = i;
            while(temp !=1)
            {
            if(temp&1)
                temp = temp * 3 + 1;
            else
                temp /= 2;
            len++;
            }
            if(len > maxLen)
                maxLen = len;
        }
        cout << a << " " << b << " " << maxLen << endl;
    }
    return 0;
}   
