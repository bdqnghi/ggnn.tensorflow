struct reward
{
   char name[20];
   int fgra;
   int tgra;
   char gb;
   char xb;
   int lw;
};
int main()
{
	int n,*pr,sum=0,max;
	struct reward *p,temp;
	scanf("%d",&n);
	struct reward *rew=(struct reward*)malloc(sizeof(struct reward)*n);
	int *trew=(int*)malloc(sizeof(int)*n);
	for(p=rew;p<rew+n;p++)
	{
		scanf("%s %d %d %c %c %d",p->name,&p->fgra,&p->tgra,&p->gb,&p->xb,&p->lw);
	}
	for(p=rew,pr=trew;p<rew+n;p++,pr++)
	{
		*pr=0;
		if(p->fgra>80&&p->lw>=1)
		{
			*pr+=8000;
			sum+=8000;
		}
		if(p->fgra>85&&p->tgra>80)
		{
			*pr+=4000;
			sum+=4000;
		}
		if(p->fgra>90)
		{
			*pr+=2000;
			sum+=2000;
		}
		if(p->fgra>85&&p->xb=='Y')
		{
			*pr+=1000;
			sum+=1000;
		}
		if(p->tgra>80&&p->gb=='Y')
		{
			*pr+=850;
			sum+=850;
		}
	}
	
	max=*trew;
	temp=*rew;
	for(p=rew,pr=trew;p<rew+n;p++,pr++)
	{
		if(*pr>max)
		{
			max=*pr;
			temp=*p;
		}
	}
	printf("%s\n%d\n%d\n",temp.name,max,sum);
	return 0;
}

