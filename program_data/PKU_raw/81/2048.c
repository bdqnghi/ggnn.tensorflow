int change(int*p3,int*p4,int n,int m)
{
	int b[6]={0},i;
	if(m>4||n>4) return(0);
	else
	{
		for(i=0;i<5;i++)
		{
			b[i]=*(p3+i);
            *(p3+i)=*(p4+i);
			*(p4+i)=b[i];
		}
		return(1);
	}
}


void main()
{
	int a[5][5],i,j,m,n,v;
	int*p1,*p2,*p=a[0];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&n,&m);
	p1=a[n];p2=a[m];
	v=change(p1,p2,n,m);
	if(v)
	{
		for(i=0;i<5;i++,p++)
		{
			for(j=0;j<4;j++,p++)
			printf("%d ",*(p));
			printf("%d",*(p));
			printf("\n");
		}
	}
	else printf("error");
}

