struct student
{
	char Name[20];
	int agrades;
	int bgrades;
	char a;
	char b;
	int n;
};
int main(int argc, char* argv[])
{
	struct student *p;
	int i,j,num;
	scanf("%d",&num);
    p=(struct student*)malloc(num*sizeof(struct student));
	for(i=0;i<num;i++)
	{
		
		scanf("%s%d%d %c %c%d",p[i].Name,&p[i].agrades,&p[i].bgrades,&p[i].a,&p[i].b,&p[i].n);
		//printf("%s %d %d %c %c %d",p[i].Name,p[i].agrades,p[i].bgrades,p[i].a,p[i].b,p[i].n);
	}
	int *p1,*p2;
	p1=(int*)malloc(num*sizeof(int));
	p2=(int*)malloc(num*sizeof(int));
	for(i=0;i<num;i++)
	{
		p1[i]=0;
		p2[i]=0;
		if(p[i].agrades>80&&p[i].n>=1)
		{
			p1[i]++;
			p2[i]+=8000;
		}
		if(p[i].agrades>85&&p[i].bgrades>80)
		{
			p1[i]++;
			p2[i]+=4000;
		}
		if(p[i].agrades>90)
		{
			p1[i]++;
			p2[i]+=2000;
		}
		if(p[i].agrades>85&&p[i].b=='Y')
		{
			p1[i]++;
			p2[i]+=1000;
		}
		if(p[i].bgrades>80&&p[i].a=='Y')
		{
			p1[i]++;
			p2[i]+=850;
		}
	}
    int sum=0;
	for(i=0;i<num;i++)
	{
        sum+=p2[i];
	}
	int max;
	max=p2[0];
	for(i=0;i<num;i++)
	{
		if(max<p2[i])
			max=p2[i];
	}
	for(i=0;i<num;i++)
	{
		if(max==p2[i])
			break;
	}
	printf("%s\n",p[i].Name);
	printf("%d\n",p2[i]);
	printf("%d",sum);

	return 0;
}