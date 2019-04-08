main()
{
	int arv[1000],lve[1000],min=0,max=0,num,sum=0,person=0;
	char c;
	int i,j,k;
	for(i=0;;i++)
	{
		scanf("%d",&arv[i]);
		c=getchar();
		if(min>arv[i]) min=arv[i];
		if(c=='\n')
		{
			num=i+1;break;
		}
	}
	scanf("%d",&lve[0]);max=lve[0];
	for(i=1;i<num;i++)
	{
		scanf(",%d",&lve[i]);
		if(lve[i]>max) max=lve[i];
	}
	for(j=min;j<=max-1;j++)//min,max-1~min+1,max
	{
		for(k=0;k<num;k++)
		{
			if(arv[k]<=j&&j+1<=lve[k])
				sum++;
		}
		if(sum>person) person=sum;
		sum=0;
	}
	printf("%d %d\n",num,person);
	return 0;
}
