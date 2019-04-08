int func(int a);
int main()
{
	int x,y;//x,y???????
	int a[10],b[10];//a,b???????????
	int i,j,flag=1;
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;i<10;i++)
	{
		a[i]=func(x);
		x=a[i];
		if(x==1)
			break;
	}
	for(i=1;i<10;i++)
	{
		b[i]=func(y);
		y=b[i];
		if(y==1)
			break;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
				flag=0;
				break;
			}
		}
		if(flag==0)
			break;
	}
	return 0;
}

		
		
		
			
int func(int a)
{
	if(a%2==0)
		a=a/2;
	else
		a=(a-1)/2;
	return(a);
}
