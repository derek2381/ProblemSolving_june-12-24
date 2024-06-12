// problem link
// https://www.codechef.com/START138D/problems/LONGDRIVE


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int X, Y, z = 0;
	    cin >> X >> Y;

	     z = ceil((10 * (Y - X)) / (100.0 - Y));

	    cout << z << endl;
	}

}
