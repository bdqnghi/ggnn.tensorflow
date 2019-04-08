void main()
{
	int n,i,d,j,sum1,sum2,year[200],mon1[200],mon2[200],count[200],ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},leap[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&year[i],&mon1[i],&mon2[i]);
	for(i=0;i<n;i++)
	{
		if(year[i]%4!=0)
			count[i]=0;
		else if(year[i]%100!=0)
			count[i]=1;
		else if(year[i]%400!=0)
			count[i]=0;
		else
			count[i]=1;
	}

	for(i=0;i<n;i++)
	{
	        sum1=0;
			sum2=0;
			d=0;
		if(count[i]==0)
		{
			
			for(j=0;j<mon1[i];j++)
			sum1+=ping[j];
			for(j=0;j<mon2[i];j++)
			sum2+=ping[j];
		    d=sum2-sum1;
		if(d%7==0)
			printf("YES\n");
		else
			printf("NO\n");

		}
		else
		{
			for(j=0;j<mon1[i];j++)
			sum1+=leap[j];
			for(j=0;j<mon2[i];j++)
			sum2+=leap[j];
		d=sum2-sum1;
		if(d%7==0)
			printf("YES\n");
		else
			printf("NO\n");

		}

	}




			

}

 
