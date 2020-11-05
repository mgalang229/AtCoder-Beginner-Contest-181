#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

vector<ar<ll, 2>> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	v=vector<ar<ll, 2>>(n);
	ll sum=0;
	for(int i=0; i<n; ++i) {
		cin >> v[i][0] >> v[i][1];
		if(v[i][0]==1)
			sum+=(v[i][1]*(v[i][1]+1))/2;
		else {
			v[i][0]--;
			ll tmp=(v[i][0]*(v[i][0]+1))/2;
			sum+=(((v[i][1]*(v[i][1]+1))/2)-tmp);
		}
	}
	cout << sum << "\n";
}
