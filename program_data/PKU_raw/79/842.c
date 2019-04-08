void monkey(int a,int b)
{
	int t[500],i,j,q=0,time;
    //sc("%d%d",&a,&b);
	
	for(i=0;i<500;i++)
		t[i]=-3;
	for(i=0;i<a;i++)
		t[i]=0;

    for(i=0;i<a-1;i++)
	{	
		time=0;
		for(j=0;;j++)
		{
			if(q>=a)
				q=q-a;

			if(t[q]==0)
				time++;
			q++;
			if(time==b)
			{
				t[q-1]=1;
				break;
			}
			
		}
	}
	for(i=0;i<a;i++)
		if(t[i]==0)
			printf("%d\n",i+1);
}
void main()
{
	int c[100],d[100],i,j;
	for(i=0;i<100;i++)
	{
		c[i]=-1;
		d[i]=-1;
	}
	i=0;
	while(!(c[i-1]==0&&d[i-1]==0))
	{
		scanf("%d%d",&c[i],&d[i]);
		i++;
	}
	for(j=0;j<i-1;j++)
	{
		monkey(c[j],d[j]);
	}
}