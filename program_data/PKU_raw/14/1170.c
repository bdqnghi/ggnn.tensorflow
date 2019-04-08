void main()
{
	struct student
	{
		int num;
		int yu;
		int shu;
		int c;
	} s[100000],k;
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&s[i].num,&s[i].yu,&s[i].shu);
		s[i].c=s[i].yu+s[i].shu;
	}
	
/*	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(s[j].c<s[j+1].c)
			{
				k=s[j];
			    s[j]=s[j+1];
				s[j+1]=k;
			}
		}
	}
	for(i=0;i<3;i++)
		printf("%d %d\n",s[i].num,s[i].c);*/
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n-1;j++)
			if(s[j].c>s[i].c)
			{
				k=s[i];
			    s[i]=s[j];
				s[j]=k;
			}
		printf("%d %d\n",s[i].num,s[i].c);
	}
}