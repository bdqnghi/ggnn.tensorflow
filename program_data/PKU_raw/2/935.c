struct book
{
	int a;
	char b[30];
	struct book *next;
};
void main()
{
	int m,i,j,k,mid,l=0;
	int d[26],e[26];
	char c[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	struct book *head,*p1,*p2;
	scanf("%d",&m);
	head=p1=p2=(struct book *)malloc(LEN);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&p1->a,p1->b);
		p1=(struct book *)malloc(LEN);
		p2->next=p1;
		p2=p1;
	}
	p1=head;
	for(j=0;j<26;j++)
	{
		p1=head;
		l=0;
		for(i=0;i<m;i++)
		{
			for(k=0;k<strlen(p1->b);k++)
			{
				if(p1->b[k]==c[j])l++;
			}
			d[j]=l;e[j]=l;
			p1=p1->next;
		}
	}
	for(i=0;i<25;i++)
	for(j=0;j<25-i;j++)
	{
		if(d[j]<d[j+1])
		{
		    mid=d[j];d[j]=d[j+1];d[j+1]=mid;
		}
    }
    for(i=0;i<26;i++)
    {
    if(e[i]==d[0])break;
    }
    printf("%c\n",c[i]);
    printf("%d\n",d[0]);
    p1=head;
    for(j=0;j<m;j++)
    {
    	for(k=0;k<strlen(p1->b);k++)
    	{
    		if(p1->b[k]==c[i])printf("%d\n",p1->a);
    	}
    	p1=p1->next;
    }
    
    	
		
		
		
}
			