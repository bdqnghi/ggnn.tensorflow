struct s
{char name[20];
int q;
int b;
char x;
char w;
int l;
};
void main()
{
	struct s stu[100];
	int n,i,p,m[100],j;
	double t=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].q,&stu[i].b,&stu[i].x,&stu[i].w,&stu[i].l);
		m[i]=0;
		if(stu[i].q>80&&stu[i].l!=0)m[i]=m[i]+8000;
		if(stu[i].q>85&&stu[i].b>80)m[i]=m[i]+4000;
		if(stu[i].q>90)m[i]=m[i]+2000;
		if(stu[i].q>85&&stu[i].w=='Y')m[i]=m[i]+1000;
		if(stu[i].b>80&&stu[i].x=='Y')m[i]=m[i]+850;
	}
	p=m[0];
	for(i=0;i<n;i++)
	{
		if(p<m[i])
		{
			p=m[i];
			j=i;
		}
		t=m[i]+t;	
	}
	printf("%s\n",stu[j].name);
	printf("%d\n%.0f\n",p,t);
}



	


