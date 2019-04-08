int main()
{
	int a[16],b[16],c=0,i,j,k;
	for(i=0;i<=15;i++)
	{
		cin>>a[i];
		if(a[i]==-1)
			break;
		if(a[i]!=0)
		{	
			if(a[i]%2==0)
				b[i]=a[i]/2;
			else
				b[i]=-1;
		}
		else
		{
			for(j=0;j<=i-1;j++)
			{
				for(k=0;k<=i-1;k++)
				{
					if(k==j)
						continue;
					if(a[k]==b[j])
						c++;
				}
			}
			cout<<c<<endl;
			for(j=0;j<=i;j++)
			{
				a[j]=0,b[j]=0;
			}
			c=0,i=-1;
		}
	}
	return 0;
}
