void main()
{
	int a,b,i,j,n,m,t=0,r=0,s=0;
	int c[1000]={0};
    int d[1000]={0};
	scanf("%d %d",&a,&b);
	for(i=0;;i++)
	{r++;
		c[i]=a;
		a=a/2;
		if(c[i]==1) 
			break;
		
	}
    for(j=0;;j++)
	{s++;
		d[j]=b;
		b=b/2;
		if(d[j]==1) 
			break;
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
		if(c[i]==d[j]) 
		{	t=c[i];			
		goto print;
		break;
		}
		}
	}
print:	printf("%d\n",t);
}