int main()
{
	int a[20],i,j,k,count;
	while(cin>>a[0])
	{
		if(a[ 0 ]==-1)
			break;
		count=0;
		for(i=1;;i++)
		{
			cin>>a[i];
			if(a[i]==0) break;
		}
		for(j=0;j<i;j++)
		{
			for(k=0;k<i;k++)
			{
				if(a[k]==2*a[j])
				{
					count+=1;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}





