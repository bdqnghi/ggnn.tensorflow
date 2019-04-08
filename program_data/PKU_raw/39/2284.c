struct student
{ 
  char name[20];
  int qimo;
  int banji;
  char ganbu;
  char xibu;
  int paper;
}stu[100];
void main()
{
	int n,i,s[100]={0},sum=0,k,max;
	struct student *p;
	scanf("%d",&n);
    for(p=stu,i=0;p<stu+n;p++,i++)
	{
		scanf("%s %d %d %c %c %d",p->name,&p->qimo,&p->banji,&p->ganbu,&p->xibu,&p->paper);
        if(p->qimo>80&&p->paper>=1)
			s[i]+=8000;
		if(p->qimo>85&&p->banji>80)
			s[i]+=4000;
		if(p->qimo>90)
			s[i]+=2000;
		if(p->qimo>85&&p->xibu=='Y')
			s[i]+=1000;
		if(p->banji>80&&p->ganbu=='Y')
			s[i]+=850;
	}
	max=s[0];
	for(i=0;i<n;i++)
	{
		sum+=s[i];
		if(s[i]>max)
		{
			max=s[i];
			k=i;
		}
	}
	printf("%s\n%d\n%d\n",stu[k].name,s[k],sum);
}
