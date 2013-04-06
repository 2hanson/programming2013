/*
 *  + + +
 *  + + +
 *  + + -
 */

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#define LL long long

using namespace std;

const long maxn = 30005;
LL dp[2][maxn];
long n, m, k;
long index;
LL ans;

void init()
{
    ans = 0;
    index = 0;
    for (int k = 0; k < m; ++k)
    {
        dp[0][k] = 0;
    }
}

void solve()
{
    for (int i = 1; i < n; ++i)
    {
        for (int k = 0; k < m; ++k)
        {
            
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int T;
    scanf("%d", &T);
    for (int tid = 1; tid <= T; ++tid)
    {
        scanf("%ld %ld %ld", &n, &m, &k);
        init();
        solve();
        cout<<"Case #"<<tid<<": "<<ans<<endl;
    }
    return 0;
}

