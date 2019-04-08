/*
 * 123.cpp
 *
 *  Created on: 2011-10-21
 *      Author: 11061
 */
int main()
{
	int n,k,i,j,l,m,count=0;
	cin>>n;
	int a[100001];
	for(i=0;i<=n-1;i++)
		cin>>a[i];
	cin>>k;
	j = 0;
	while(j < n){
		while(a[j] == k && j <= n-1){
			for(l = j; l <= n-2; l++){
				a[l] = a[l+1];
			}
			n --;
		}
		j ++;
	}

	for(m=0;m<=n-2;m++)
		cout<<a[m]<<' ';
	cout<<a[m];

	return 0;
}
