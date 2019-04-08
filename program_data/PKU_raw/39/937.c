struct student
{
	char name[20];
	int qm;
	int bj;
	char x;
	char xi;
	int lun;
	int award;
};
void main()
{
	struct student s[100];
	int i,N,k=0,p,q=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %c %c %d",s[i].name,&s[i].qm,&s[i].bj,&s[i].x,&s[i].xi,&s[i].lun);
		s[i].award=0;
	//	printf("%s %d %d %c %c %d\n",s[i].name,s[i].qm,s[i].bj,s[i].x,s[i].xi,s[i].lun);
	}
	for(i=0;i<N;i++)
	{
		if(s[i].qm>80&&s[i].lun>0)
			s[i].award=s[i].award+8000;
		if(s[i].qm>85&&s[i].bj>80)
			s[i].award=s[i].award+4000;
		if(s[i].qm>90)
			s[i].award=s[i].award+2000;
		if(s[i].qm>85&&s[i].xi=='Y')
			s[i].award=s[i].award+1000;
		if(s[i].bj>80&&s[i].x=='Y')
			s[i].award=s[i].award+850;
	}
	p=s[0].award;
	for(i=0;i<N;i++)
	{
		if(s[i].award>p)
			p=s[i].award;
	}
	q=0;
	for(i=0;i<N;i++)
	{
		if(s[i].award==p)
		{
			if(k==0)
			{
				k=k+1;
				printf("%s\n",s[i].name);
				printf("%d\n",p);
			}
		}
		q=q+s[i].award;
	}
	printf("%d",q);
}
			
