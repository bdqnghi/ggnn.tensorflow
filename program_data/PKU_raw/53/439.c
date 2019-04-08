void main()
{
	int i,x=0,y,z=0,p,enter,count;
	int a[300];
	scanf("%d",&i);
	
	while(z<=i-1)
	{
		z++;
		count=0;
		scanf("%d",&enter);
		
		for(y=0;y<x;y++)
		{
			if(enter==a[y])
			count++;
		}
		if(count!=0) continue;
		a[x]=enter;
		x++;
		
	}
		


	for(p=0;p<x-1;p++)
	{
		printf("%d,",a[p]);
    }
	printf("%d",a[x-1]);
	
	
	


}