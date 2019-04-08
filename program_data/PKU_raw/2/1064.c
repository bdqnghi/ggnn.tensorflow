struct book
{
	int num;
	char author[26];
	struct book *next;
};
void main()
{
	int m,i,j,l,max,maxi;int n[26]={0};
	struct book *head,*p1,*p2;char *p;
	scanf("%d",&m);
	i=0;
	p1=p2=(struct book *)malloc(LEN);
	scanf("%d %s",&p1->num,p1->author);
	head=NULL;
	while(i<m)
	{
		i++;
		if(i==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		if(i<m)
		{
			p1=(struct book *)malloc(LEN);
			scanf("%d %s",&p1->num,p1->author);
		}
	}
	p2->next=NULL;
	p1=head;
	while(p1!=NULL)
	{
		l=strlen(p1->author);
		p=p1->author;
		for(i=0;i<l;i++)
		{
			
			for(j=0;j<26;j++)
				if(*(p+i)==j+64)
					n[j]++;
		}
		p1=p1->next;
	}
	max=n[0];
	for(i=1;i<26;i++)
	{
		if(n[i]>max)
		{
			max=n[i];
			maxi=i;
		}
	}
	printf("%c\n",maxi+64);

	printf("%d\n",max);
	
	p1=head;
	while(p1!=NULL)
	{
        l=strlen(p1->author);
		p=p1->author;
		for(i=0;i<l;i++)
		{
			
				if(*(p+i)==maxi+64)
				{
					printf("%d\n",p1->num);
					break;
				}
		}
		p1=p1->next;
	}
}