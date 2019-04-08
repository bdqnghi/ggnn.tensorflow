int main()
{
	int x,m=0,n=0,i=0,j=0,h=0,k=0,d=0;
	scanf("%d",&x);
	h=x+1;
	int *strm=(int *)malloc(h*sizeof(int));
	int *strn=(int *)malloc(h*sizeof(int));
	for(d=0;d<=x;d++)
	{
		strm[d]=0;
		strn[d]=0;
	}
	for(;;)
	{
		scanf("%d%d",&m,&n);
		if(m==0&&n==0)
		{break;}
		else
		{
			strm[m]=strm[m]+1;
			strn[n]=strn[n]+1;
		}
	}
	for(j=0;j<=x-1;j++)
	{
		if(strm[j]==0&&strn[j]==x-1)
		{
			printf("%d",j);
			k=1;
		}
	}
	if(k==0)
	{printf("NOT FOUND");}
}