int main()
{
	char A[250],B[250],C[250],a;
	int l,m,n,q,g=0;
	gets(A);
	gets(B);
	n=strlen(A);
	m=strlen(B);
	for(int i=0;i<250;i++)
	{
		C[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		A[i]-=48;
	}
	for(int i=0;i<m;i++)
	{
		B[i]-=48;
	}
	for(int i=0;i<n/2;i++)
	{
		a=A[i];
		A[i]=A[n-i-1];
		A[n-i-1]=a;
	}
	for(int i=0;i<m/2;i++)
	{
		a=B[i];
		B[i]=B[m-i-1];
	    B[m-i-1]=a;
	}
	l=max(m,n);
	q=min(m,n);
	//cout<<A<<endl;
	//cout<<B<<endl;
	for(int i=0;i<q;i++)
	{
		C[i]=A[i]+B[i];
	}
	for(int i=q;i<l;i++)
	{
		if(n>m)
		C[i]=A[i];
		else if(m>n)
		C[i]=B[i];
	}
	for(int i=0;i<l;i++)
	{
		if(C[i]>9)
		{
			C[i+1]++;
			C[i]-=10;
		}
	}
	if(C[l]>0)
		l++;
	for(int i=l-1;i>=0;i--)
	{
		if(C[i]==0&&g==0)
			continue;
		if(C[i]!=0)
			g=1;
		if(g==1)
	    cout<<(int)C[i];
	}
	if(g==0)
		cout<<"0";
	return 0;
}