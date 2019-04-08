void main()
{
	struct stu
	{
		char s[50],c,d;
		int a,b,e,m;
	}stu[500];
	int n,i,max=0,all=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		stu[i].m=0;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].s,&stu[i].a,&stu[i].b,&stu[i].c,&stu[i].d,&stu[i].e);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].a>80 && stu[i].e>0)
			stu[i].m=stu[i].m+8000;
		if(stu[i].a>85 && stu[i].b>80)
			stu[i].m=stu[i].m+4000;
		if(stu[i].a>90)
			stu[i].m=stu[i].m+2000;
		if(stu[i].a>85 && stu[i].d=='Y')
			stu[i].m=stu[i].m+1000;	
		if(stu[i].b>80 && stu[i].c=='Y')
			stu[i].m=stu[i].m+850;
	}
	for(i=0;i<n;i++)
	{
		all=all+stu[i].m;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].m>max)
			max=stu[i].m;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].m==max)
		{
			printf("%s\n%d\n",stu[i].s,stu[i].m);
			max=-1;
		}
        
	}
	printf("%d\n",all);
}







	



	




