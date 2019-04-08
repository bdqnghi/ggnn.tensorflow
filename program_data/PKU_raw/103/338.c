

int main()
{
	int i,j,n,k,counter;
	char a[100]={0},x;
	cin>>a;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>=97)
			a[i]=a[i]-32;
	}
	for(i=0;a[i]!=0;)
	{
		x=a[i];
		for(j=i,k=0;a[j]==x;j++)
			k++;
		cout<<"("<<x<<","<<k<<")";
		i=j;
	}
	return 0;
}

