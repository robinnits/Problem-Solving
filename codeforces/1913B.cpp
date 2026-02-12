#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int cnt0 = 0, cnt1 = 0;
		for (int i = 0; i< s.size(); i++){
			if (s[i] == '0')
				cnt0++;
			else
				cnt1++;
		}
		int t = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '0' && cnt1> 0){
				cnt1--;
				t++;
			}
			else if (s[i] == '1' && cnt0 > 0){
				cnt0--;
				t++;
			}
			else break;
		}
		cout<<s.size()-t<<'\n';
	}
	return 0;
}