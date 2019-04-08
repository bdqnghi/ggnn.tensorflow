struct stu
{
	long num,ch,ma,tot;
	
	struct stu *next;
};


int main()
{
	int n,numt,cht,mat;
	scanf("%d",&n);
	struct stu *head,*now,*neww,*max;
	int i;
	for (i=1;i<=n;i++)
		{
			neww=(struct stu*) malloc (sizeof(struct stu));
			neww->next=0;
		    if (i==1) 
               {head=neww; 
                now=neww;}
            else
		       {
                now->next=neww;
                now=neww; 
               }
            scanf("%ld %ld %ld",&now->num,&now->ch,&now->ma);
		    now->tot=now->ch  +   now->ma;
		}	
  for (i=1;i<=3;i++) 
  {
    now=head;
    max=now;
    while (now->next!=0) 
          {
              if (max->tot<now->tot) max=now; 
              now=now->next;
          }
    printf("%d %d\n",max->num,max->tot);
    max->tot=-1;
  }	
  //  scanf("%ld %ld %ld",&now->num,&now->ch,&now->ma);

return 0;      	
}
