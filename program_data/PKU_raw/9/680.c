struct patient
{ char id[11];
  int age,seq;
  struct patient *next;
};
main()
{  int n,n1=0,n2=0,i,j,m,at;
   char id[10];
   struct patient *head1,*head2,*p11,*p12,*p21,*p22,*t,*q;
   scanf("%d",&n);
   head1=NULL;
   head2=NULL;
   for(i=0;i<n;i++)
   {
     scanf("%s%d",id,&at);
     if(at>=60)
     {  if(head1==NULL)
	{
         head1=(struct patient*)malloc(sizeof(struct patient));
	 strcpy(head1->id,id);
	 head1->age=at;
         head1->next=NULL;
	}
	else
	{ for(t=head1,q=t;t!=NULL;q=t,t=t->next)
	  {  if(t->age<at&&t!=head1)
	     {

	      p11=(struct patient *)malloc(sizeof(struct patient));
	      p11->age=at;
	      strcpy(p11->id,id);
              q->next=p11;
	      p11->next=t;
              break;
	     }
	     if(t->age<at&&t==head1)
	     {
              p11=(struct patient *)malloc(sizeof(struct patient));
	      p11->age=at;
	      strcpy(p11->id,id);
              p11->next=head1;
	      head1=p11;
	      break;
	     }
	    /* if(t->age==at)
	     {
              p11=(struct patient *)malloc(sizeof(struct patient));
	      p11->age=at;
	      strcpy(p11->id,id);

	      p11->next=t->next;
              t->next=p11;
              break;
	     } */

	  }
	  if(t==NULL)
          {
            p11=(struct patient *)malloc(sizeof(struct patient));
	    p11->age=at;
	    strcpy(p11->id,id);
            q->next=p11;
            p11->next=NULL;
          }


	}
     }

     if(at<60)
     {  if(head2==NULL)
	{
         head2=(struct patient*)malloc(sizeof(struct patient));
	 strcpy(head2->id,id);
	 head2->age=at;
	 head2->next=NULL;
	 p22=head2;
	}
        else
       {
          p21=(struct patient *)malloc(sizeof(struct patient));
          p21->age=at;
	  strcpy(p21->id,id);
          p22->next=p21;
          p21->next=NULL;
          p22=p21;
       }
     }



   }

   for(t=head1,q=t;t!=NULL;q=t,t=t->next);

    q->next=head2;
   for(t=head1;t->next!=NULL;t=t->next)
   { printf("%s\n",t->id);

   }
   printf("%s",t->id);
}