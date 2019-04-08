void main()
{struct student
{char a[100];
 struct student *next;
} *p1,*p2,*head;
int n=0;
p1=p2=(struct student *)malloc(sizeof(struct student));
head=NULL;
gets(p1->a);
while(strcmp(p1->a,"end"))
{n++;
if(n==1)
head=p1;
else
p2->next=p1;
p2=p1;
p1=(struct student *)malloc(sizeof(struct student));
gets(p1->a);
}
p2->next=NULL;
for(;;)
{ for(p2=head;;p2=p2->next)
  { p1=p2->next;
	  if(p1->next==NULL)
	  {printf("%s\n",p1->a);
        p2->next=NULL;
		break;
	  }
  }
if(p2==head)
{printf("%s\n",head->a);
break;
}

}



}