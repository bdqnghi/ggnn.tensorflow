struct student
{
	int num;
	char s[100];
	struct student *next;
};
void main()
{
	struct student *p1,*p2,*head;
	int n,i,j,k,m,a[100];
	char c[100],nam[100][100];					
	for(i=0;i<26;i++)
	{	c[i]=i+65;	a[i]=0;}						//??
	scanf("%d",&n);
	p1=p2=head=(struct student*)malloc(LEN);
	scanf("%d %s",&p1->num,p1->s);
	for(i=1;i<n;i++)
	{
		p1=(struct student*)malloc(LEN);
		scanf("%d %s",&p1->num,p1->s);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	p1=head;
	i=0;
	while(p1!=NULL)
	{
		strcpy(nam[i],p1->s);
		i++;
		p1=p1->next;
	}
	p1=head;
	for(k=0;k<n;k++)
	{
		//printf("%s\n",nam[k]);//????????nam[k]???????????????????????????????????????……?????//???……
		for(i=0;i<26;i++)
		{
			for(j=0;nam[k][j]!='\0';j++)
				if(nam[k][j]==c[i])
					a[i]++;
		}
		
	}
	k=a[0];
		for(i=0;i<26;i++)
		{
			if(a[i]>k)
				k=a[i];
		}
		for(i=0;i<26;i++)
		{
			if(a[i]==k)
			{	printf("%c\n%d",c[i],a[i]);
				m=i;
				break;
			}
		}
		p1=head;
		for(i=0;i<n;i++)
		{
			for(j=0;nam[i][j]!='\0';j++)
			{
				if(nam[i][j]==c[m])
					printf("\n%d",p1->num);
			}
			p1=p1->next;

		}
		

}
