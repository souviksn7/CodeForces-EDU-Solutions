#include <iostream>
#include <limits.h>
#include <cstdint>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <set>
#include <cstring>
#include <deque>
#include <stack>
#include <queue>
#include <utility> 
#include <iomanip>      // std::setprecision
#include <sstream>      // std::stringstream
using namespace std;
typedef long long l1;
typedef long long unsigned lu1;
typedef long double ld;
#define FIO std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define PI acos(-1.0)
#define pb push_back
// #define SORT(A) sort(A.begin(), A.end());
// #define REVERSE(A) reverse(A.begin(), A.end());
#define deb(x) cout << #x << ": " << x << "\n"
#define PrintArray(arr) for(int i=0;i<(int)arr.size();i++)cout<<arr[i]<<" ";cout<<"\n";
#define pii pair<int,int>
#define pll pair<long long int , long long int>
#define puu pair<long long unsigned , long long unsigned>
#define int long long
const int MOD = 1e9+7;

int check(vector<int>& arr, ld len)
{
    // if(len == (ld)0.000) return 0;
    int pieces = 0, n = arr.size();
    for(int i=0;i<n;i++)
    {
        pieces += floor(arr[i]/len);
    }
    return pieces;
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // FIO;
    int t;
    t = 1;
    // cin>>t; 
    for (int tc=0;tc<t;tc++) 
    { 
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i1=0;i1<n;i1++) cin>>arr[i1];
        ld low = (ld)0, high = (ld)1e9, ans , mid;
        int temp = 100;
        for(int i1=1;i1<=temp;i1++)
        {
            mid = (ld)(low+(ld)high)/(ld)2.00;
            int pieces = check(arr,mid);
            // deb(mid);deb(pieces);
            if(pieces >= k)
            {
                ans = mid;
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        cout<<fixed<<setprecision(20)<<ans<<"\n";
    }
 
    #ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    return 0;
}