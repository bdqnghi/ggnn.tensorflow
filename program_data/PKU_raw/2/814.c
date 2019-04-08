void main()
{
	struct book
	{
		int num;
		char author[27];
		struct book *next;
	}*head = 0,*p1,*p2;
	int total,i,j,sumbook[26]={0},len,max;
	scanf("%d",&total);
	for(i=0;i<total;i++)
	{
		p1=(struct book *)malloc(sizeof(struct book));
		if(p1==0)
		{
			printf("Memory request failed!\n");
			exit(-1);
		}
		scanf("%d %s",&p1->num,p1->author);
		len = strlen(p1->author);
		for(j = 0;j<len;j++)
			sumbook[p1->author[j]-'A']++;
		if(head)
			p2->next=p1;
		else
			head=p1;
		p2=p1;
	}
	p1->next=0;
	len = 0;
	for(i = 0;i<26;i++)
	{
		if(sumbook[i]>len)
		{
			len = sumbook[i];
			max = i;
		}
	}
	printf("%c\n%d\n",max+'A',sumbook[max]);
	max += 'A';
	for(p1=head;p1;p1=p1->next)
	{
		len = strlen(p1->author);
		for(i = 0;i<len;i++)
		{
			if(p1->author[i]==max)
			{
				printf("%d\n",p1->num);
				break;
			}
		}
	}
}