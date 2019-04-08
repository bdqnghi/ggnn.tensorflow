int main()
{
	int x,x1,a=0,b=-1,flag=0;
	scanf("%d",&x1);
	a=x1;
	while((scanf(",%d",&x))==1)
	{
	 
		if(a<x)
		{ 
			b=a;
			a=x;
		}
		if(a>x&&b<x)
			b=x;
		flag=1;
   	}
	if(a>b&&b!=-1)
 printf("%d",b);
	if(flag=0||b==a||b==-1)
	printf("No");
 return 0;
}

