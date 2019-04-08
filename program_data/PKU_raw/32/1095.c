int main(){
	int n,t;
	cin>>n;
	for(t=1;t<=n;t++){
	char a[101],b[101],c[101];
	cin>>a;
	cin>>b;
	int n1,n2,n3,i,j,k=0;
	n1=strlen(a),n2=strlen(b),n3=strlen(a);
	for(i=n1-1,j=n2-1;i>=0;i--,j--)
	{
		if(j>=0)
		{
			if(a[i]-k>=b[j])
			{
				c[i]=a[i]-b[j]-k+48;
				k=0;
			}
			else
			{
				c[i]=a[i]+10-b[j]-k+48;
				k=1;
			}
		}
		else
		{
			if(a[i]-48>=k)
			{
				c[i]=a[i]-k;
				k=0;
			}
			else
			{
				c[i]=10+a[i]-k;
				k=1;
			}
		}
	}
	if(c[0]!='0')
		cout<<c[0];
	for(i=1;i<n1-1;i++)
		cout<<c[i];
	cout<<c[n1-1]<<endl;}
	return 0;
}
