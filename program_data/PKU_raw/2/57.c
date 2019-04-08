struct chain
{
	int num;
	char name[27];
	struct chain *next;
};
void main()
{
	int a[26]={0},m,i,j,k,max=0,n;
	struct chain *p1,*p2,*head;
	scanf("%d",&m);
	p2=head=(struct chain *)malloc(LEN);
	for(k=0;k<27;k++)
		head->name[k]=0;
	scanf("%d%s",&head->num,&head->name);
	for(k=0;k<strlen(head->name);k++)
		{
			if(head->name[k]>=65&&head->name[k]<=90)
					a[head->name[k]-65]++;
		}
	for(j=0;j<m-1;j++)
	{
		p1=(struct chain *)malloc(LEN);
		p2->next=p1;
		for(k=0;k<27;k++)
			p1->name[k]=0;
		scanf("%d%s",&p1->num,&p1->name);
		p2=p1;
		for(k=0;k<strlen(p1->name);k++)
		{
			if(p1->name[k]>=65&&p1->name[k]<=90)
					a[p1->name[k]-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			n=i;
		}
	}
	printf("%c\n%d\n",n+65,max);
	p1=head;
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			if(p1->name[j]==(n+65))
			{
				printf("%d\n",p1->num);
				break;
			}
		}
		p1=p1->next;
	}
}