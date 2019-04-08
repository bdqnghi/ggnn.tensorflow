struct student
{ int a,b,paper,total;
  char leader,west,name[32];
  struct student *next;
};

main()
{
   int n,i,sum=0;
   struct student *p1,*p2,*head,*max;
   scanf("%d",&n);
   
   
   
   
   p2=p1;
   for(i=0;i<n;i++)
   { p1=(struct student *)malloc(L);
     scanf("%s %d %d %c %c %d",p1->name,&p1->a,&p1->b,&p1->leader,&p1->west,&p1->paper);
     p1->total=0;
     if(p1->a>80&&p1->paper>=1) p1->total=p1->total+8000;
     if(p1->a>85&&p1->b>80) p1->total=p1->total+4000;
     if(p1->a>90) p1->total=p1->total+2000;
     if(p1->a>85&&p1->west=='Y') p1->total=p1->total+1000;
     if(p1->b>80&&p1->leader=='Y') p1->total=p1->total+850;
     sum=sum+p1->total;
     if(i==0){ max=p1;p2=head=p1;head->next=NULL;}
     else{ if(p1->total>max->total) max=p1;
     p2->next=p1;
     p2=p1;p2->next=NULL;}
   }
   printf("%s\n%d\n%d\n",max->name,max->total,sum);
}
