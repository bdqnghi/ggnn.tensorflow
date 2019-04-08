void main()
{
	int n,w,c[2],i,j,max,total,no;
	char a1,a2,s[20],t[20];
	scanf("%d",&n);
	total=0;
	max=0;
	for(i=0;i<n;i++)
	{
		w=0;
		scanf("%s %d %d %c %c %d",s,&c[0],&c[1],&a1,&a2,&no);
		if(c[0]>80&&no>0) w=w+8000;
		if(c[0]>85&&c[1]>80) w=w+4000;
		if(c[0]>90) w=w+2000;
		if(c[0]>85&&a2=='Y') w=w+1000;
		if(c[1]>80&&a1=='Y') w=w+850;
		total=total+w;
		if(w>max) 
		{
			max=w;
			strcpy(t,s);
		}
	}
	printf("%s\n%d\n%d\n",t,max,total);
}