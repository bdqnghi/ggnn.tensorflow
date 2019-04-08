main()
{
	int i=0,j,k,reach[10000],leave[10000],num=0,max=0;char a;
	do
	{
		scanf("%d%c",&reach[i],&a);
		i++;
	}
	while(a!='\n');
	printf("%d ",i);
	for(j=0;j<i;j++)
		scanf("%d%c",&leave[j],&a);
	for(j=0;j<1000;j++)
	{
		for(k=0;k<=i;k++)
			if(reach[k]<=j&&leave[k]>j)num++;
		if(num>max)max=num;
		num=0;
	}
	printf("%d",max);
}


		
