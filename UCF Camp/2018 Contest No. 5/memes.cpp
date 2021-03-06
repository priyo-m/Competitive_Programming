#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <deque>
#include <string.h>
#include <sstream>
#include <bitset>
#include <math.h>
#include <assert.h>

using namespace std;

#define PI atan2(0, -1)
#define epsilon 0.000000001
#define INF 5000000000000000000
#define MOD 1000000007

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

int N, R;
long long dp [2][4010], ret = 0;

int main(){
    //freopen("sort.in", "r", stdin); freopen("sort.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(18);
    cin >> N >> R; memset(dp[0], -1, sizeof(dp[0])); dp[0][0] = 0;
    for(int i = 1, curr = 1; i <= N; i++, curr ^= 1){
        int r; long long d; cin >> r >> d;
        for(int j = 0; j <= R; j++){
            dp[curr][j] = dp[curr^1][j];
            if(j >= r && dp[curr^1][j-r] != -1) dp[curr][j] = max(dp[curr][j], d+dp[curr^1][j-r]);
            ret = max(ret, dp[curr][j]);
        }
    }
    cout << ret << '\n';
    return 0;
}
