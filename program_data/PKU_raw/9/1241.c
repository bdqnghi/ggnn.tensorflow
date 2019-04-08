struct guahao
{
	char num[20];
	int year;
};
int main()
{
	int n,i,m;
	struct guahao temp,*p,*t,*p1;
	scanf("%d",&n);
	m=n;
	struct guahao *bingren=(struct guahao*)malloc(sizeof(struct guahao)*n);
	struct guahao *bingren1=(struct guahao*)malloc(sizeof(struct guahao)*m);
	p=bingren;
	p1=bingren1;
	for(;p<bingren+n;p++,p1++)
	{
		scanf("%s %d",p->num,&p->year);
		*p1=*p;
	}
	p=bingren;
	for(i=0;p<bingren+n-1;p++,i++)
	{
		for(t=bingren;t<bingren+n-1-i;t++)
		{
			if((*t).year<(*(t+1)).year)
			{
				temp=*t;
				*t=*(t+1);
				*(t+1)=temp;
			}
		}
	}
	p=bingren;
	for(;p<bingren+n;p++)
	{
		if((*p).year>=60)
		{
			printf("%s\n",p->num);
		}
	}
	for(p1=bingren1;p1<bingren1+m;p1++)
	{
		if((*p1).year<60)
		{
			printf("%s\n",p1->num);
		}
	}
	free(bingren);
	free(bingren1);
	return 0;
}
			
	