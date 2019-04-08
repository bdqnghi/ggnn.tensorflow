struct shu
{
	int hao;
	char zuo[26];
	struct shu*next;
};
int main()
{
	int m,a[26]={0},i,j,b[26][1000],k,max;
	struct shu*p1,*p2,*head=NULL,*p;
	scanf("%d",&m);
    p1=p2=(struct shu*)malloc(len);
	scanf("%d %s",&p1->hao,p1->zuo);
	head=p1;
	for(i=2;i<=m;i++)
	{
		p1=(struct shu*)malloc(len);
		scanf("%d %s",&p1->hao,p1->zuo);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	for(i=0,max=0;i<=25;i++)
	{
		for(p=head,k=1;p!=NULL;p=p->next)
		{
			for(j=0;j<=25;j++)
				if(p->zuo[j]=='A'+i)
				{
					a[i]++;
					b[i][k]=p->hao;
					k++;
				}
		}
		if(a[i]>max)
			max=a[i];
	}
	for(i=0;i<=25;i++)
	{
		if(a[i]==max)
		{
			printf("%c\n%d\n",'A'+i,max);
			for(k=1;k<=max;k++)
				printf("%d\n",b[i][k]);
			break;
		}
	}
	return 0;
}