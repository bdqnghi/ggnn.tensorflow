int f(int x)
{
	int i,tag=1;
	if(x==2)return 1;
	else if(x==1)return 0;
	else
	{
		for(i=2;i<x;i++)
         if(x%i==0)
		 {tag=0;break;}
		 return tag;
	}
}
void main()
{
	int n,i,num=0;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++)
		if(f(i)&&f(i+2))
		{printf("%d %d\n",i,i+2);num++;}
		if(num==0)
			printf("empty\n");
}

