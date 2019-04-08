struct ill
{
 char id[11];
 int age;
 struct ill*next;
};
struct ill*creat(int n)
{struct ill*head,*p1,*p2;
 int i;
 head=NULL;
 for(i=0;i<n;i++)
 {p1=(struct ill*)malloc(sizeof(struct ill));
  scanf("%s %d",p1->id,&p1->age);
  if(i==0)head=p1;
  else p2->next=p1;
  p2=p1;
 }
 p2->next=NULL;
 return(head);
}
struct ill* arrang(struct ill*head)
{int t,tt;
 char s[11],ss[11];
 struct ill*p,*q,*m,*h;
 for(p=head;p!=NULL;p=p->next)
 {
	 if(p->age>=60)
	 {
      for(m=p,q=p->next;q!=NULL;q=q->next)
      if(q->age > m->age && m->age>=60 ) m=q;
	  {t=tt=p->age; strcpy(s,p->id); strcpy(ss,p->id);
	   for(h=p->next;h!=m->next;h=h->next)
	   {tt=h->age; strcpy(ss,h->id); 
	    h->age=t; strcpy(h->id,s); 
        t=tt; strcpy(s,ss);
	   }
      p->age=t; strcpy(p->id,s); 
	  }
	 }
 }
 return(head);
}
void main()
{int n;
 struct ill*head,*h;
 scanf("%d",&n);
 head=creat(n);
 head=arrang(head);
 for(h=head;h!=NULL;h=h->next)
	 if(h->age>=60)  printf("%s\n",h->id);
 for(h=head;h!=NULL;h=h->next)
	 if(h->age<60)  printf("%s\n",h->id);
}