int  main()
{
	int n[300],m[300],t=0,i,j,k,p,a[300];
	for(i=0;;i++)
	{
		cin>>n[i]>>m[i];
		if(n[i]==0)
			break;
        else
        t++;
	}
	for(p=0;p<t;p++)
	{
		for(i=0;i<n[p];i++)
			a[i]=i+1;
		i=0;
		j=0;
		k=0;
		while(j<n[p])
		{
			if(a[i]!=0)
			{
				k++;
				if(k%m[p]==0)
				{
					j++;
					if(j==n[p])
					{
						cout<<a[i]<<"\n";
						break;
					}
					a[i]=0;
				}
			}
			i++;
			if(i==n[p])
				i=0;
		}
	}
	return 0;
}

