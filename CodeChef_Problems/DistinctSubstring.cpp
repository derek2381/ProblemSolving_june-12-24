// problem link
// https://www.codechef.com/START138D/problems/DISTSUB


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	vector<long long int> arr(501);
	arr[0] = 1;

	for(int i = 1;i <= 500;i++){
	    arr[i] = arr[i-1] * i;
	}

	while(t--){
	    int n, k;
	    cin >> n >> k;

	    long long int val = (k * (k+1))/2;
	    val += (k-1);


	    if(val <= n) {
	        cout << "YES\n";
	    }else{
	        cout << "NO\n";
	    }
	}

}
