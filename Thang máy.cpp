#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
#define de(x) cout << #x << " is " << x << endl;
#define de2(x,y) cout << #x << " is " << x << " " << #y << " is " << y << endl;
#define de3(x,y,z) cout << #x << " is " << x << " " << #y << " is " << y << " " << #z << " is " << z << endl;
#define dearr(v) {for (auto i:v) cout << i << " "; cout << endl;}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int up, down;
    cin >> up >> down;
    int st, end;
    cin >> st >> end;
    queue<int>q;
    q.push(st);
    map<int,int>mp;
    while (!q.empty()){
    	int t = q.front();
    	if (t==end) break;
    	if (t+up<=n && mp[t+up]==0){
			mp[t+up] = mp[t]+1;
    		q.push(t+up);
    	}
		if (t-down>=1 && mp[t-down]==0){
    		mp[t-down] = mp[t]+1;
			q.push(t-down);
		}
		q.pop();
	}		
	if (mp[end]==0) cout << -1;
	else cout << mp[end];
}

