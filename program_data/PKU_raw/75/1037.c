int main()
{
	
	int a[1000]={0},b[1000]={0},i=0,j,kk=0,n,al,m=0,c[1000]={0},chang;
    while(1)
	{   
		cin>>a[i];
		i++;
		if(cin.get()!=',')
			break;
	}
	i=0;
	while(1)
	{   
		cin>>b[i];
		i++;
		if(cin.get()!=',')
			break;
	}
	chang=i-1;



		
	
	for(i=0;i<=999;i++)
		if((a[i]==0)&&(b[i]>0))
			kk++;
		c[0]=kk;		
kk=0;
		for(j=1;j<=1000;j++)
	{
		for(i=0;i<=chang;i++)
		{
			if((a[i]<=j)&&(b[i]>j))
				kk++;
		}
		c[j]=kk;
		kk=0;
	}
		
	for(i=0;i<=999;i++)
		if(b[i]>0)
		
		m=m+1;

	cout<<m+1<<" ";
	for(j=0;j<=999;j++)
		if(c[j]>c[0])

			c[0]=c[j];
	cout<<c[0];	
	return 0;
}