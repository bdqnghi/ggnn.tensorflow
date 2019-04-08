struct a
{int year;
 char id[10];
 struct a *next;
};
struct a *create(int n)
{struct a *p1,*p2,*head;
int i;
p1=(struct a*)malloc(len);
scanf("%s%d",p1->id,&p1->year);
p1->next=NULL;
head=p1;
p2=p1;
for(i=1;i<n;i++)
{p1=(struct a*)malloc(len);
scanf("%s%d",p1->id,&p1->year);
p1->next=NULL;
p2->next=p1;
p2=p1;
}
return head;
}
void main()
{
	struct a *head,*p,*q,*t[100];
	int m,i,j=0,k;
	scanf("%d",&m);
	head=create(m);
	p=head;
	for(i=0;i<m;i++)
	{if(p->year>=60){t[j]=p;j++;}
	p=p->next;
	}
	for(k=0;k<j-1;k++)
		for(i=0;i<j-1-k;i++)
			if(t[i]->year<t[i+1]->year)
			{p=t[i];
			t[i]=t[i+1];
			t[i+1]=p;
			}
	for(i=0;i<j;i++)
			printf("%s\n",t[i]->id);
	p=head;
	j=0;
	for(i=0;i<m;i++)
	{if(p->year<60){t[j]=p;j++;}
	p=p->next;
	}
	for(i=0;i<j;i++)
			printf("%s\n",t[i]->id);	
}

