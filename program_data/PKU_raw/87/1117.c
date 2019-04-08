int main()
{
	int s,a,b,c,d,e,f;
	while(1)
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{break;}
		s=f+e*60+(3600-b*60-c)+(11-a)*3600+3600*d;
		printf("%d\n",s);
	}
	return 0;
}