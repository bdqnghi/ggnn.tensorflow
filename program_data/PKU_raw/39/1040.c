int main()
{
	long sum=0,s,max=0;
	int n,i,a,b,e;
	char nm[20],nm0[20],c[2],d[2];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%d%d%s%s%d",nm,&a,&b,c,d,&e);
		s=0;
		if(a>80&&e)s+=8000;
		if(a>85&&b>80)s+=4000;
		if(a>90)s+=2000;
		if(a>85&&d[0]=='Y')s+=1000;
		if(b>80&&c[0]=='Y')s+=850;
		sum+=s;
		if(s>max)
		{
			strcpy(nm0,nm);
			max=s;
		}
	}
	printf("%s\n%d\n%d\n",nm0,max,sum);
	return 0;
}