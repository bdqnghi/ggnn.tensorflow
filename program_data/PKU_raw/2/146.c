
struct book
{
	int number;
	char writer[26];
	struct book *next;
}

main()
{
	int n,i,j,num[26]={0},nu[26],a,b;
	struct book *head,*p1,*p2;
	scanf("%d",&n);
	p1=p2=(struct book *)malloc(LEN);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&p1->number,&p1->writer);
		for(j=0;j<strlen(p1->writer);j++)
		{
			++num[p1->writer[j]-65];
		}
		if(i==0)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(LEN);
	}
	p2->next=NULL;
	for(i=0;i<26;i++)
	{
		nu[i]=i;
	}
	for(i=0;i<25;i++)
	{
		for(j=0;j<25-i;j++)
		{
			if(num[j]<num[j+1])
			{
				a=nu[j];
				nu[j]=nu[j+1];
				nu[j+1]=a;
				b=num[j];
				num[j]=num[j+1];
				num[j+1]=b;
			}
		}
	}
	printf("%c\n%d\n",nu[0]+65,num[0]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(head->writer);j++)
		{
			if(head->writer[j]==(char)nu[0]+65)
			{
				printf("%d\n",head->number);
				break;
			}
		}
		head=head->next;
	}
}