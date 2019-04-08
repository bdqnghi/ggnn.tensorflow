int main()
{
	int m,x,y,a,b,i,j;
	scanf("%d",&m);
	for(x=3;x<=m/2;x++,x++)
	{
		a=sqrt(x*1.0);
		for(i=3;i<=a;i++,i++) 
		{
			if (x%i==0) break;
		}
		if (i>a||x==3||x==5) 
		{
			y=m-x;
			b=sqrt(y*1.0);
			for(j=3;j<=b;j++,j++)
			{
				if (y%j==0) break;
			}
			if (j>b||y==3||y==5) 
				printf("%d %d\n",x,y);
		}
	}
}