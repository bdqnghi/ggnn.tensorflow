int main()
{
	int i,t=0,c=1,d=1,n,p=0,q=0,r=0,*b;
	struct pp
	{
		int x;
		int y;
		int z;
	}*s;
	scanf("%d",&n);
	b=(int*)malloc(sizeof(int)*n);
	s=(struct pp*)malloc(sizeof(int)*3*n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&s[i].x,&s[i].y,&s[i].z);
		b[i]=((s[i].y)+(s[i].z));
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>t)
		{
			t=b[i];
			p=i;
		}
	}
	for(i=0;i<n;i++)
	{
		{
			if((b[i]>c)&&(i!=p))
			{c=b[i];
			q=i;}
		}
	}
	for(i=0;i<n;i++)
	{
		{
			if((b[i]>d)&&(i!=p)&&(i!=q))
			{d=b[i];
			r=i;}
		}
	}
	printf("%d %d\n",s[p].x,b[p]);
	printf("%d %d\n",s[q].x,b[q]);
	printf("%d %d\n",s[r].x,b[r]);
	return 0;
}

