int main()
{
	char a[500],b[5];
	int n,i,j,k,p,q,l,m,max,c[500];
	cin>>n;
	cin>>a;
	for(i=0;i<500;i++) c[i]=0;
	l=strlen(a);
	for(i=0;i<l-n+1;i++)
	{
		for(j=0;j<n;j++)
		b[j]=a[j+i];
		for(k=i;k<l-n+1;k++)
		{
			m=0;
			for(j=0;j<n;j++)
			{
				if(b[j]!=a[k+j]) m++;
			}
			if(m==0) c[i]++;
		}
	}
	max=c[0];
	for(i=0;i<l-n+1;i++)
	if(c[i]>max)
	max=c[i];
	if(max!=1) cout<<max<<endl;
	for(i=0;i<l-n+1;i++)
	{
		if(c[i]==max)
		{
			if(max==1) {cout<<"NO";break;}
		for(j=0;j<n;j++)
		cout<<a[i+j];
		cout<<endl;
		}
	}
	return 0;
}
	
		
		