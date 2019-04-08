void main()
{
	int N,b,c,f,i,j,max=0,s,S=0;
	char a[21],d,e,name[21];
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		s=0;
		scanf("%s%d%d %c %c%d",a,&b,&c,&d,&e,&f);
		if(b>80&&f>=1)
			s=s+8000;
		if(b>85&&c>80)
			s=s+4000;
		if(b>90)
			s=s+2000;
		if(b>85&&e=='Y')
			s=s+1000;
		if(c>80&&d=='Y')
			s=s+850;
		if(s>max)
		{
			for(j=0;j<=strlen(a);j++)
				name[j]=a[j];
			max=s;
		}
		S=S+s;
	}
	printf("%s\n%d\n%d\n",name,max,S);
}