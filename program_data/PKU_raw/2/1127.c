void main()
{
	struct ts
	{
		int sl;
		char zz[30];
		int zzsl;
		struct ts *next;
	};
	struct ts *p1,*p2,*head;
	int i,j,k,m,n,max,zzzdnum,num[100]={0};
	char zzzd;
	scanf("%d",&n);
	p1=p2=head=(struct ts *)malloc(sizeof(struct ts));
	scanf("%d %s",&p1->sl,p1->zz);
//	p1->zzsl=strlen(p1->zz);//?????
	for(i=1;i<n;i++)
	{
		p1=(struct ts *)malloc(sizeof(struct ts));
		scanf("%d %s",&p1->sl,p1->zz);
		p1->zzsl=strlen(p1->zz);
		p2->next=p1;
		p2=p1;
	}
	p1->next=0;
	for(i='A';i<='Z';i++)
	{
		p1=head;
		for(k=0;k<n;k++)
		{
			for(j=0;p1->zz[j]!='\0';j++)
			{
				if(p1->zz[j]==i)num[i]++;
			}
			p1=p1->next;
		}
	}
	max=0;
	for(i='A';i<='Z';i++)
	{
		max=max>num[i]?max:num[i];
	}
	for(i='A';i<='Z';i++)
	{
		if(num[i]==max)zzzd=i;//????????
	}
	printf("%c\n%d\n",zzzd,max);
	p1=head;
	zzzdnum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;p1->zz[j]!='\0';j++)
		{
			if(p1->zz[j]==zzzd)
			{
				printf("%d\n",p1->sl);
			}
		}
		p1=p1->next;
	}
}
