int main(int argc, char* argv[])
{
	struct r{int a;int b;int c;}r[99999];
	int i,n,x=0,y=0,z=0,m1=0,m2=0,m3=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&r[i].a,&r[i].b,&r[i].c);
	}
    for(i=1;i<=n;i++)
	{
		if(r[i].b+r[i].c>m1)
		{
			m1=r[i].b+r[i].c;
		    x=i;
		}
	}
    for(i=1;i<=n;i++)
	{
		if((r[i].b+r[i].c==m1)&&(i!=x))
		{
			m2=r[i].b+r[i].c;
			y=i;
		}
		else if((m1>r[i].b+r[i].c)&&(r[i].b+r[i].c>m2))
		{
			m2=r[i].b+r[i].c;
		    y=i;
		}
	}
    for(i=1;i<=n;i++)
	{ 
		if((r[i].b+r[i].c==m2)&&(i!=y)&&(i!=x))
		{
			m3=r[i].b+r[i].c;
			z=i;
		}

		else if((m2>r[i].b+r[i].c)&&(r[i].b+r[i].c>m3))
		{
			
			m3=r[i].b+r[i].c;
		    z=i;
		}
	}
    printf("%d %d\n",x,m1);
	printf("%d %d\n",y,m2);
	printf("%d %d\n",z,m3);
     
	return 0;
}


