void main()
{
	
	struct stud
	{
		char name[1000];
		int gra;
		int grcla;
		char of;
		char won;
		int essay;
		int sum;
	};
	struct stud a[1000];	
	
	
	int n,i,all=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&a[i].name,&a[i].gra,&a[i].grcla,&a[i].of,&a[i].won,&a[i].essay);
	}
	for(i=0;i<n;i++)
	{
		a[i].sum=0;
		if(a[i].gra>80&&a[i].essay>=1)a[i].sum=8000;
		if(a[i].gra>85&&a[i].grcla>80)a[i].sum=a[i].sum+4000;
	    if(a[i].gra>90)a[i].sum=a[i].sum+2000;
	    if(a[i].gra>85&&a[i].won=='Y')a[i].sum=a[i].sum+1000;
		if(a[i].grcla>80&&a[i].of=='Y')a[i].sum=a[i].sum+850;
	}

	for(i=0;i<n;i++)
		all=all+a[i].sum;
	
	
	
	for(i=0;i<=n-1;)
	{
		if(a[i].sum<a[j+1].sum)
			i=i+1;
		else if(a[i].sum>=a[j+1].sum)
			j++;
		if(j>=n)
			break;
	}


	printf("%s\n",a[i].name);
	printf("%d\n",a[i].sum);
	printf("%d\n",all);

}


