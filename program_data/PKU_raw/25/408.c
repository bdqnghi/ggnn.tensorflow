int a[1000];
void calc()
{
	int j=0;
	for(j=0;j<1000;j++)
		a[j]=a[j]*2;
	for(j=0;j<1000;j++)
	{
		if(a[j]>=10)
		{
			a[j+1]=a[j+1]+a[j]/10;
			a[j]=a[j]%10;
		}
	}
}
int main()
{
	memset(a,0,sizeof(a));
	int n=0,k=0;
	cin>>n;
	int i=0,sum=1;
	for(i=0;i<30;i++)
		sum=sum*2;

	while(sum!=0)
	{
		a[k]=sum%10;
		sum=(sum-a[k])/10;
		k++;		
	}



		sum=1;
	if(n<=30)
	{
		for(i=0;i<n;i++)
			sum=sum*2;
		cout<<sum<<endl;
	}
	else
	{
		for(i=30;i<n;i++)
			calc();
		int p=0;
		for(i=1000;i>=0;i--)
		{
			if(a[i]!=0)
			{
				p=i;
				break;
			}
		}
		for(i=p;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}