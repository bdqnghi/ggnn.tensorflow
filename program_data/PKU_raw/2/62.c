struct a
{
	int num;
	char s[20];
	struct a *next;
}
main()
{
	int n,i,a[26],b[26]={0},t,j,max;

	struct a *p1,*p2,*head;
	scanf("%d",&n);
	head=p1=(struct a *)malloc(L);
	scanf(M,&p1->num,p1->s);
	for(i=1;i<n;i++)
	{
		p2=p1;
		p1=(struct a *)malloc(L);
		p2->next=p1;
		scanf(M,&p1->num,p1->s);
	}
	p1->next=NULL;
	for(i=0;i<26;i++)
		a[i]=65+i;
	for(i=0;i<26;i++)
	{	p1=head;
		while(p1!=NULL)
		{
			for(j=0;p1->s[j]!='\0';j++)
				if(a[i]==p1->s[j])
					b[i]++;
				p1=p1->next;
		}
	
	}
	max=b[0];t=0;
	for(i=1;i<26;i++)
		if(b[i]>max)
		{
			max=b[i];
			t=i;
		}
		printf("%c\n%d\n",a[t],max);
		p1=head;
	while(p1!=NULL)
	{
		for(j=0;p1->s[j]!='\0';j++)
			if(a[t]==p1->s[j])
			{printf("%d\n",p1->num);break;}
		p1=p1->next;
	}
}
