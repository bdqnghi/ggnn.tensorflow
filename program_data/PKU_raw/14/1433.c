struct student
{int num;
 int yw;
 int sx;
 struct student *next;
};
void main()
{
	struct student *head,*p1,*p2;
	int i,max,n;
	scanf("%d",&n);
	p1=p2=head=NULL;
	for(i=0;i<n;i++)
	  {p1=(struct student*)malloc(LEN);
	   scanf("%d%d%d",&p1->num,&p1->yw,&p1->sx);
	   if(i==0)head=p1;
	   else p2->next=p1;
	   p2=p1;
	   } 
	 p2->next=NULL;

   for(i=0;i<3;i++)
   {p1=p2=head;
    max=p1->yw+p1->sx;
	while(p1!=NULL)
	   {if((p1->yw+p1->sx)>max)
	       {max=p1->yw+p1->sx;
	        p2=p1;
	       }
	   p1=p1->next;
	   }
	printf("%d %d\n",p2->num,max);
	p1=head;
	while(p1->next!=p2)
	   {p1=p1->next;}
	p1->next=p2->next;
   }
}



    
