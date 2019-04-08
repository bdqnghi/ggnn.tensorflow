void main()
{
	struct student
	{
		char name[20];
		int final;
		int eval;
		char leader;
		char west;
		int paper;
	} s;
	char maxname[20];
	int n,i,j;
	int prize,max=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1)
	{
		prize=0;
		for(j=0;j<20;j=j+1)
			s.name[j]='\0';
		s.final=0;
		s.eval=0;
		s.leader='\0';
		s.west='\0';
		s.paper=0;
		scanf("%s",s.name);
		scanf("%d",&s.final);
		scanf("%d ",&s.eval);
		scanf("%c ",&s.leader);
		scanf("%c",&s.west);
		scanf("%d",&s.paper);
		if(s.final>80 && s.paper>0)
			prize=prize+8000;
		if(s.final>85 && s.eval>80)
			prize=prize+4000;
		if(s.final>90)
			prize=prize+2000;
		if(s.final>85 && s.west=='Y')
			prize=prize+1000;
		if(s.eval>80 && s.leader=='Y')
			prize=prize+850;
		sum=sum+prize;
		if(prize>max)
		{
			max=prize;
			for(j=0;j<20;j=j+1)
				maxname[j]='\0';
			strcpy(maxname,s.name);
		}
	}
	printf("%s\n",maxname);
	printf("%d\n",max);
	printf("%d\n",sum);
}