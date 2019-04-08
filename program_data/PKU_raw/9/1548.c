struct pa{//patient
	char id[10];
	int age;
	int re;//register
}p[100],po[100],temp;
void main()
{
	int n,i,j,pj=0,oldj=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",p[pj].id,&p[pj].age);
		if(p[pj].age>=60)
		{
			po[oldj]=p[pj];
			po[oldj].re=oldj;
			oldj++;
		}
		else
		{
			p[pj].re=pj;
			pj++;
		}
	}
	for(i=0;i<oldj-1;i++)
	{
		for(j=i+1;j<oldj;j++)
		{
			if ( (po[i].age<po[j].age) || (po[i].age==po[j].age && po[i].re>po[j].re) )
			{
				temp=po[i];
				po[i]=po[j];
				po[j]=temp;
			}
		}
		printf("%s\n",po[i].id);
	}
	printf("%s\n",po[i].id);
	for(i=0;i<pj;i++)
		printf("%s\n",p[i].id);
}