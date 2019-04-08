

main()
{
   struct h
   {
      char name[11];
	  int mun;
	  struct h *next;
   } *p,*q,*head,*s,*t,*last;
int n;
scanf("%d",&n);
 q=len;
 s=head=q;
 scanf("%s %d", head->name,&head->mun);
 q->next=NULL;
 last=q;
 int i;
 for(i=0;i<n-1;i++)
 {
  s=head;
  q=len;
  q->next=NULL;
  scanf("%s %d", q->name,&q->mun);
  if(q->mun>=60)
  {
	  while((s!=NULL)&&((q->mun)<=(s->mun)))
	  { 
		  t=s;
          s=s->next;
	  }
  if(s==head) {q->next=head;head=q;}
     else 
	 {
		 if(t==last) last=q; 
		 t->next=q;q->next=s;
	 } 	
  
 }
  else 
 {
	  last->next=q;
	  last=q;
 }
 }
 
 q=head;
 for(i=0;i<n;i++)
 {
	 printf("%s\n",q->name);
     q=q->next;
 }


}
