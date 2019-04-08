int main()
{
	int h1,m1,s1,h2,m2,s2;
	int i,n=0;
	int a[LEN];
	for(i=0;;i++)
	{	
		scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
		if(h1==0&&m1==0&&s1==0&&h2==0)
			break;
		a[i]=((h2+12)*3600+m2*60+s2)-(h1*3600+m1*60+s1);
		n++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

