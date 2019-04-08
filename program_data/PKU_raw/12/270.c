int main()
{
	int a[20],i,j,sum;
	
	while(1)
	{
		
		sum=0;
		for(i=1;;i++)
		{
			cin>>a[i];
			if(a[1]==-1)break;
			if(a[i]==0)break;
			for(j=1;j<i;j++)
			{
				if(a[i]==2*a[j]||a[j]==2*a[i])
				{
					sum++;
				}
			}
		}
		if(a[1]!=-1)cout<<sum<<endl;
	if(a[1]==-1)break;
	}
      return 0;
}