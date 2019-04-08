int main()
{
	struct money
	{
		char name[20];
		int score1,score2;
		char a[2],b[2];
		int paper;
		int all;
	};
	struct money * p;
	int n,m;int * pp;
	scanf("%d",&n);
	p=(struct money *)malloc(n*sizeof(struct money));
	pp=(int *)malloc(n*sizeof(int));
	for(m=0;m<n;m++)
	{
		pp[m]=0;
		scanf("%s",p[m].name);
		scanf("%d %d",&p[m].score1,&p[m].score2);
		scanf("%s %s",&p[m].a,&p[m].b);
		scanf("%d",&p[m].paper);
		if(p[m].score1>80&&p[m].paper>0)
			pp[m]=pp[m]+8000;
		if(p[m].score1>85&&p[m].score2>80)
			pp[m]=pp[m]+4000;
		if(p[m].score1>90)
			pp[m]=pp[m]+2000;
		if(p[m].b[0]=='Y'&&p[m].score1>85)
			pp[m]=pp[m]+1000;
		if(p[m].a[0]=='Y'&&p[m].score2>80)
			pp[m]=pp[m]+850;
		p[m].all=pp[m];
	}
	int i,j,k,q=0;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(pp[j]>pp[j+1])
			{
				k=pp[j];
				pp[j]=pp[j+1];
				pp[j+1]=k;
			}
	for(i=0;i<n;i++)
		q=q+pp[i];
	for(i=0;i<n;i++)
		if(p[i].all==pp[n-1])
{
			printf("%s\n%d\n%d\n",p[i].name,p[i].all,q);break;
}

	free(p);
	free(pp);
}
