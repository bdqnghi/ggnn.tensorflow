int first[3],firsti[3];
struct stu
{
	int num;
	int chinese;
	int math;
	int sum;
	struct stu *next;
	
}	*p1,*p2;
struct stu *creat(int n)
{  struct stu *head=NULL;
   p1=p2=(struct stu*)malloc(sizeof(struct stu));
   while (n--)
   {   scanf("%d %d %d",&p1->num,&p1->chinese,&p1->math);
       if(head==NULL) head=p1;
	   else p2->next=p1;
	   p2=p1;
       p1=(struct stu*)malloc(sizeof(struct stu));
	   
   }
   p2->next=NULL;
return(head);
}
struct stu *sum(struct stu *head,int n)
{  p1=head;
	while(n--)
	{p1->sum=p1->chinese+p1->math;
	p1=p1->next;
	}
	return(head);
}

int main()
{int n,i,check=0;
struct stu *head,*f1,*f2,*f3;
f1=(struct stu*)malloc(sizeof(struct stu));
scanf("%d",&n);  
head=creat(n);
head=sum(head,n);
p1=head;     if(n==1)  {printf("%d %d\n",p1->num,p1->sum);return 0;}

for(i=0,f1=head;i<n;i++,p1=p1->next)
if(f1->sum<p1->sum)  f1=p1;  
     p1=head;
	   for(i=0;i<n;i++)
	   {p2=p1;p1=p1->next;
	   if(head==f1) {head=p1;break;}
		else if(p1==f1)
		  {
			p2->next=p1->next;
		  }
	   }    
p1=head;
for(i=0,f2=head;i<n-1;i++,p1=p1->next)
    if(f2->sum<p1->sum)  f2=p1;
  if(n==2)   {printf("%d %d\n",f1->num,f1->sum);
          printf("%d %d\n",f2->num,f2->sum);
		  return 0;
  }
  p1=head;
	   for(i=0;i<n-1;i++)
	   {p2=p1;p1=p1->next;
	   if(head==f2) {head=p1;break;}
		else if(p1==f2)
		  {
			p2->next=p1->next;
		  }
	   }
p1=head;
for(i=0,f3=head;i<n-2;i++,p1=p1->next)
    if(f3->sum<p1->sum)  f3=p1;
   printf("%d %d\n",f1->num,f1->sum);
   printf("%d %d\n",f2->num,f2->sum);
   printf("%d %d\n",f3->num,f3->sum);

return 0;
}