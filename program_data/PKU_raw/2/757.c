int main()
{
	struct writer
	{
		int num;
		char name[20];
		struct writer * next;
	};
	int i,j,k,l,m,z[26]={0},max,n;
	struct writer *p1,*p2,*p,*head;
	scanf("%d",&n);
	head=p1=p2=(struct writer *)malloc(sizeof(struct writer));
	scanf("%d %s",&p1->num,&p1->name);
	for (i=0;i<n-1;i++)
	{
		p1=(struct writer *)malloc(sizeof(struct writer));
		scanf("%d %s",&p1->num,&p1->name);
		p2->next=p1;
		p2=p1;
	}
    p=head;
	for (i=0;i<26;i++)    /*26?????????????????*/
	{ 
		p=head;
		for (j=0;j<n;j++)
		{
		    for (k=0;k<20;k++)
			{
			    if (p->name[k]==(char)(i+65))
				{
				    z[i]++;
				}
			}
			p=p->next;
		}
	}
    max=z[0];
	j=0;
	for (i=0;i<26;i++)
	{
		if (max<z[i])
		{
			max=z[i];
				j=i;     /*????????*/
		}
	}
	printf("%c\n%d\n",65+j,max);   /*??????????*/
	p=head;
	for (i=0;i<n;i++)   /*???????*/
	{
		for (k=0;k<20;k++)
		{
			if (p->name[k]==(char)(65+j))
			{
				printf("%d\n",p->num);
				break;
			}
		}
		p=p->next;
	}
}
