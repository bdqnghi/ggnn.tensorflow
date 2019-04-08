void main()
{
	char name[100][21],gan[100],west[100],temp1[21];
	int end[100],cls[100],esy[100],rmb[100];
	int n,i,j,sum,temp2;
	char a='Y';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",name[i],&end[i],&cls[i],&gan[i],&west[i],&esy[i]);
	}
	for(i=0;i<n;i++)
	{
		rmb[i]=0;
		if(end[i]>80&&esy[i]>0) rmb[i]+=8000;
		if(end[i]>85&&cls[i]>80) rmb[i]+=4000;
		if(end[i]>90) rmb[i]+=2000;
		if(end[i]>85&&west[i]==a) rmb[i]+=1000;
		if(cls[i]>80&&gan[i]==a) rmb[i]+=850;
	}
	for(i=0,sum=0;i<n;i++)
	{
        sum+=rmb[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(rmb[j]>=rmb[j+1])
			{
				temp2=rmb[j];
				rmb[j]=rmb[j+1];
				rmb[j+1]=temp2;
				strcpy(temp1,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp1);
			}
		}
	}
	printf("%s\n",name[n-1]);
	printf("%d\n",rmb[n-1]);
	printf("%d\n",sum);
}

