#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, k, a[100], final=0;

void ktao(){
	for (int i = 1; i <= n; ++i)
	{
		a[i]=i;
	}
}

void sinh(){
	int i=n-1;

	while(i>=1 && a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		final=1;
	}else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1, a+n+1);
	}
}

vector<vector<int>> res;

int main()
{
	cin >> n;
	int x[100];
	ktao();
	while(final==0){
		vector<int> tmp(a+1,a+n+1);
		res.push_back(tmp);
		sinh();
	}
	for(int i=0; i<res.size();i++){
		for(int x : res[i]){
			cout << x << ' ';
		}
		cout << endl;
	}
	
	return 0;
}