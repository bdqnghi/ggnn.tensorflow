void main()
{
	int n,i,t1,t2,t3,t4,t5,all;
	struct reward
	{char name[20];
	 int score;
	 int comment;
	 char boss[2];
	 char west[2];
	 int paper;
	 int sum;
	};
	struct reward a[2];
	scanf("%d",&n);
	scanf("%s%d%d%s%s%d",a[0].name,&a[0].score,&a[0].comment,a[0].boss,a[0].west,&a[0].paper);
	if(a[0].score>80&&a[0].paper>0) t1=1; 
	else t1=0;
	if(a[0].score>85&&a[0].comment>80) t2=1;
	else t2=0;
	if(a[0].score>90) t3=1;
	else t3=0;
	if(a[0].score>85&&strcmp(a[0].west,"Y")==0) t4=1;
	else t4=0;
	if(a[0].comment>80&&strcmp(a[0].boss,"Y")==0) t5=1;
	else t5=0;
	a[0].sum=8000*t1+4000*t2+2000*t3+1000*t4+850*t5;
	for(i=1,all=a[0].sum;i<n;i++)
	{
		scanf("%s%d%d%s%s%d",a[1].name,&a[1].score,&a[1].comment,a[1].boss,a[1].west,&a[1].paper);
	    if(a[1].score>80&&a[1].paper>0) t1=1;
	    else t1=0;
	    if(a[1].score>85&&a[1].comment>80) t2=1;
     	else t2=0;
    	if(a[1].score>90) t3=1;
    	else t3=0;
    	if(a[1].score>85&&strcmp(a[1].west,"Y")==0) t4=1;
    	else t4=0;
    	if(a[1].comment>80&&strcmp(a[1].boss,"Y")==0) t5=1;
     	else t5=0;
    	a[1].sum=8000*t1+4000*t2+2000*t3+1000*t4+850*t5;
		all=all+a[1].sum;
		if(a[1].sum>a[0].sum)
		{
			strcpy(a[0].name,a[1].name);
			a[0].sum=a[1].sum;
		}
	}
	printf("%s\n%d\n%d",a[0].name,a[0].sum,all);	
}