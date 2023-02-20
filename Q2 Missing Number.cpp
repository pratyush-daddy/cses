#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	
	int n;
	cin >> n;
	int arr[n-1];

	for (int i = 0; i < n-1; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i=1; i<=n; i++) {z
		sum = sum + i;
	}
	int sum2 = 0;
	for (int i = 0 ;i < n-1; i++) {
		sum2 = sum2 + arr[i];
	}
	int ans = sum -sum2;
	cout << ans;

	return 0;
}