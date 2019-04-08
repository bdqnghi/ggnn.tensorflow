int f1(int i)
{
	int t,c=1;
	for(t=2;t<=(i/2);t++)
		if(i%t==0)
		{c=0;break;}
	return(c);
}
int f2(int i)
{
	int t1=0,t2=i;
	while(t2!=0)
	{
		t1=t1*10+t2%10;
		t2=t2/10;
	}
	if(t1==i)
    return(1);
	else return(0);
}

void main()
{
	int n,m,i,c=0;
	scanf("%d %d",&m,&n);
    
	for(i=m;i<=n;i++)
	{
	if(f1(i)&&f2(i))
	{if(c==0)
	{printf("%d",i);c=1;}
	else
		printf(",%d",i);
    }
	}
	if(c==0)
		printf("no");
	printf("\n");
	
}