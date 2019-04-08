struct tushu
{
	int num;
	char name[26];
	struct tushu *next;
};
struct tushu *creat(int n)
{
	struct tushu *head,*p1,*p2;
	p1=p2=(struct tushu *)malloc(LEN);
	scanf("%d%s",&p1->num,p1->name);
	head=p1;
	int i;
	for(i=1;i<n;i++)
	{
		p1=(struct tushu *)malloc(LEN);
		scanf("%d%s",&p1->num,p1->name);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return(head);
}
int main()
{
	int n,num[26]={0},*p,i,j,max=0;
	char *a;
	scanf("%d",&n);
	struct tushu *head,*p1;
	head=creat(n);
	p=num;
	for(i=0;i<26;i++)
	{
		p1=head;
		a=p1->name;
		while(p1!=NULL)
		{
			for(j=0;*(a+j)!='\0';j++)
			{
	   	    	if(*(a+j)==i+65)
				{
					*(p+i)=*(p+i)+1;
					break;
				}
			}
			p1=p1->next;
			a=p1->name;
		}
	}
	for(i=1;i<26;i++)
	{
		if(*(p+max)<*(p+i)) max=i;
	}
	printf("%c\n",max+65);
	printf("%d\n",*(p+max));
	p1=head;
	a=p1->name;
	while(p1!=NULL)
	{
		for(i=0;*(a+i)!='\0';i++)
		{
			if(*(a+i)==(max+65))
			{
				printf("%d\n",p1->num);
				break;
			}
		}
		p1=p1->next;
		a=p1->name;
	}
return 0;
}
