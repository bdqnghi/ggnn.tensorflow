//#define NULL 0
struct stu
{
	int num;
	char c[26];
	struct stu *next;
};

struct stu* create(int m)
{
	struct stu *p1,*p2,*xhead;
	p1=(struct stu *)malloc(LEN);
	scanf("%d %s",&p1->num,p1->c);
	p2=p1;
	xhead=p1;

	while(m-1)
	{
		m--;
		p1=(struct stu*)malloc(LEN);
		scanf("%d %s",&p1->num,p1->c);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return xhead;
}

int stas(int b[])
{
		int j,max=0,indexx=0;
		for(j=0;j<26;j++)
		if(b[j]>max)
		{
			max=b[j];
			indexx=j;
		}
	printf("%c\n%d\n",indexx+65,max);
	//for(j=0;j<26;j++)
		//printf("%d ",b[j]);
	return indexx;
}

struct stu* search(struct stu* yhead,int y)
{
	struct stu *q;
	int sum=0,k;
	char *i;
	char s[20],s0[20]={'\0'};
	q=yhead;
	while(q)
	{
		strcpy(s,q->c);
		k=strlen(s);
		for(i=s;i<i+k;i++)
			if(*i==y+65)
				sum++;
		strcpy(s,s0);
		q=q->next;
	}
	printf("%d\n",sum);
	return 0;
}

struct stu* print(struct stu* zhead,int z)
{
	struct stu* q;
	int k;
	char *i;
	char s[20],s0[20]={'\0'};
	q=zhead;
	while(q)
	{
		strcpy(s,q->c);
		k=strlen(s);
		for(i=s;i<s+k;i++)
			if(*i==z+65)
			{
				printf("%d\n",q->num);
				break;
			}
		strcpy(s,s0);
		q=q->next;
	}
	return 0;
}

int main()
{
	int n,index;
	int a[26],k,t,i;
	char s[20],s0[20]={'\0'};
	struct stu *p,*head;
	memset(a,0,sizeof(a));

	scanf("%d",&n);
	head=create(n);
	p=head;
	while(p)
	{
		strcpy(s,p->c);
		//printf("%s ",s);
		k=strlen(s);
		//printf("%d ",k);
		for(i=0;i<k;i++)
		{
			//printf("%c ",s[i]);
			t=s[i]-65;
			a[t]++;
		}
		//for(t=0;t<26;t++)
			//printf("%d ",a[t]);
		strcpy(s,s0);
		p=p->next;
	}

	index=stas(a);
	//search(head,index);
	print(head,index);
	return 0;
}
