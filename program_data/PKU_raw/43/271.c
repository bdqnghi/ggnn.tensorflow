int sushu(int x)
{
	int i=2;
	int c=0;
	for(i=2;i<=x;i++)
	{
		if(x%i==0)
			break;
		if(2*i>x)
			c=1;
		}
    return c;	
}

void main()
{
	int a;
	int j;
	scanf("%d",&a);
	for(j=1;4*j+2<=a;j++)
	{
		if(!sushu(2*j+1))
			continue;
		else
			if(sushu(a-1-2*j))
			    printf("%d %d\n",2*j+1,a-1-2*j);
	}
}
