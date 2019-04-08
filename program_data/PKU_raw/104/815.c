void shu(int c[],int k)
{
	if(c[k-1]!=1)
	{
	
	if(c[k-1]%2==0)
	{
		c[k]=c[k-1]/2;
		k++;
		shu(c,k);
	}
	else
	{
		c[k]=(c[k-1]-1)/2;
		k++;
		shu(c,k);
	}
}

	
}
int main()
{
	int a[100]={0},b[100]={0},i,j,s=0,q;
	cin>>a[1];
	cin>>b[1];
	shu(a,2);
	shu(b,2);
	for(i=1;i<=99;i++)
	{
		for(j=1;j<=99;j++)
		{
			if(a[i]==b[j]&&a[i]>0)
			{
				cout<<a[i];
				s=1;
				break;
			}
		}
		if(s==1)
		break;
	}
	cin>>q;
	return 0;
}