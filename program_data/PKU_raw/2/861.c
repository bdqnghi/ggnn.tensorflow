struct book
{
	int num;
	char writer[20];
	struct book *next;
};
int main()
{
	int n,i,j,m,k,c[26],max;//c[26]???????????//
	char a[26];//a[26]??????//
	scanf("%d",&m);
	struct book *p1,*p2,*head;
	for(i=0;i<m;i++)
	{
		p1=(struct book*)malloc(Len);
		if(i==0)
		{
			head=p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;
		scanf("%d %s",&p1->num,p1->writer);
	}
	p2->next=NULL;
	p1=head;
	for(i=0;i<26;i++)
	{
		a[i]=i+65;
		c[i]=0;
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<26;i++)
		{
			n=strlen(p1->writer);
			for(k=0;k<n;k++)
			{
				if(a[i]==p1->writer[k])
				{
					c[i]++;
				}
			}
		}
		p1=p1->next;
	}
	max=0;
	for(i=0;i<26;i++)
	{
		if(c[i]>c[max])
		{
			max=i;
		}
	}
	printf("%c\n%d\n",a[max],c[max]);
	p1=head;
	for(i=0;i<m;i++)
	{
		n=strlen(p1->writer);
		for(j=0;j<n;j++)
		{
			if(p1->writer[j]==a[max])
			{
				printf("%d\n",p1->num);
			}
		}
		p1=p1->next;
	}
	return 0;
}























