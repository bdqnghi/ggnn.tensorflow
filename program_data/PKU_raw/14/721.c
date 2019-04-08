
int main()
{
    int id,chinese,math,total;

	int n,i,a=0,b=0,c=0,x=0,y=0,z=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        scanf("%d%d%d",&id,&chinese,&math);
		total=chinese+math;
		if(total>a)
		{
			c=b;
			z=y;
			b=a;
			y=x;
            a=total;
			x=id;

		}
		else if(total<=a&&total>b)
		{
			c=b;
			z=y;
			b=total;
			y=id;
		}
		else if(total<=b&&total>c)
		{
			c=total;
			z=id;
		}
	
	}
	
    printf("%d %d\n",x,a);
	printf("%d %d\n",y,b);
    printf("%d %d\n",z,c);
	return 0;
}