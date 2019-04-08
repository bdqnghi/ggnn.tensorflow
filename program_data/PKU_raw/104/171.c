void main()
{
	int a[10000],b[10000];
	int x,y,i,k,j;
	scanf("%d %d",&x,&y);
	if(x==y)printf("%d\n",x);
	else if(x*y==x||x*y==y)printf("1");
	else
	{
	for(i=2;;i++)
	{
		a[0]=0;
		a[1]=x;

	

		if(x%2==1)
		{
			x=(x-1)/2;
			a[i]=x;
		}
		else
		{
			x=x/2;
			a[i]=x;
		}
	if(x==1)break;
	}

	b[1]=y;
	b[0]=1;
	for(j=2;;j++)

	{
	
		

		if(y%2==1)
		{
			y=(y-1)/2;
			b[j]=y;
		}
		else
		{
			y=y/2;
			b[j]=y;
		}
       if(y==1)break;

	}
	for(k=0;;k++)
	{
		if(a[i-k]!=b[j-k])
			break;
	}
	printf("%d\n",a[i-k+1]);
	}
}
