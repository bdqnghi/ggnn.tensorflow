struct book
{
   int num;
   char w[26];
   struct book *next;
};
int c[26],m,i,j=0,max;

struct book *creat(int m)
{
    struct book *head,*p1,*p2;
	p1=(struct book*)malloc(len);
    scanf("%d%s",&p1->num,p1->w);
	p1->next=NULL;
	p2=p1;
	head=p1;
	for(i=1;i<m;i++)
	{
		p1=(struct book*)malloc(len);
        scanf("%d%s",&p1->num,p1->w);
	    p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return head;
}
void a(struct book *head)
{
    struct book *p;
	char *x;
	int l,ch;
    p=head;
	for(i=0;i<m;i++)
	{
		for(x=p->w;x<p->w+26;x++)
		{
              l=(int)*x;
			  ch=l-65;

			  if(ch>=0) c[ch]=c[ch]+1;
		}
		p=p->next;
	}
}
      
void main()
{
	struct book *head,*p;
	struct book *creat(int m);
    void a(struct book *head);
	char writer,*x;
	int wri,b[200];
	for(i=0;i<26;i++) c[i]=0;
	for(i=0;i<200;i++) b[i]=0;
	scanf("%d",&m);
	head=creat(m);
	a(head);
	max=0;
	j=0;
	for(i=0;i<26;i++)
	{
        if(c[i]>max)
		{
		wri=i+65;
		max=c[i];
	
		}
	}
	printf("%c\n",wri);
    p=head;
	for(i=0;i<m;i++)
	{
		for(x=p->w;x<p->w+26;x++)
		{
			if(*x==(char)wri)
			{
				b[j]=p->num;
				j=j+1;
				break;
			}
		}
		p=p->next;
	}
printf("%d\n",j);
for(j=0;b[j]>0;j++) printf("%d\n",b[j]);
  


}
