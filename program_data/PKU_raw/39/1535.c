int main()
{
	char name[20],name1[20],gb,xb;
	int n,aver,py,lw,max=0,i,j;
	long int total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sum=0;
		scanf("%s %d %d %c %c %d",name,&aver,&py,&gb,&xb,&lw);
        if(aver>80&&lw>=1) sum+=8000;
		if(aver>85&&py>80) sum+=4000;
		if(aver>90) sum+=2000;
		if(aver>85&&xb=='Y') sum+=1000;
		if(py>80&&gb=='Y') sum+=850;	total+=sum;
		if(sum>max) 
		{
			max=sum;
			for(j=0;j<20;j++)
			{
				name1[j]=name[j];
			}}
	
	}
	printf("%s\n%d\n%d\n",name1,max,total);
	return 0;
}

