int main(){
	int n,m[20001]={0},i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>m[i];
	for(i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(m[i]==m[j])
				{for(j;j<=n;j++)
					m[j]=m[j+1];
				n=n-1;
				i=i-1;
			}
	for(i=1;i<=n-1;i++)
		cout << m[i] <<' ';
	cout << m[n] << endl;
	return 0;
}