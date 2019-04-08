int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	typedef struct{
		char name[20];
		char ganbu;
		char xibu;
		int qimo;
		int qizhong;
		int lunwen;
		int money;
	}jiangxuejin;
	jiangxuejin a[100];
	jiangxuejin *p,*max;
	max=a;
	for(p=a;p<a+n;p++)
	{
		p->money=0;
		scanf("%s %d %d %c %c %d",&p->name,&p->qimo,&p->qizhong,&p->ganbu,&p->xibu,&p->lunwen);
		if((p->qimo>80)&&(p->lunwen>=1))
		(p->money)+=8000;
		if((p->qimo>85)&&(p->qizhong>80))
		(p->money)+=4000;
		if(p->qimo>90)
		(p->money)+=2000;
		if((p->qimo>85)&&(p->xibu=='Y'))
		(p->money)+=1000;
		if((p->qizhong>80)&&(p->ganbu=='Y'))
		(p->money)+=850;
		if(p->money>max->money)
		max=p;
		sum+=p->money;
	}
	printf("%s\n%d\n%d",max->name,max->money,sum);
}