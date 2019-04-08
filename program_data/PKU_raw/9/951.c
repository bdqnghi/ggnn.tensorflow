int main()
{ struct peo
  { char num[10];
    int old;
    struct peo *next;
   };
  struct peo *p,*p1,*p2,*p3,*head1,*head2,*head3;
  int n,i,j,k;
  p=p1=p2=p3=head1=head2=head3=(struct peo *)malloc

(sizeof(struct peo));
  scanf("%d\n",&n);
  for (i=1;i<=n;i++)
   { scanf("%s%d",&p1->num,&p1->old);
     if (i==1) head1=p1;
     else p2->next=p1;
     p2=p1;
     p1=(struct peo *)malloc(sizeof(struct peo));
    }
  for (i=1;i<=n;i++)
  { p1=head1;p2=head1;
    for (j=1;j<=(n+1-i);j++)
     {if (p1->old>p2->old&&p1->old>=60) {p2=p1;}
      p1=p1->next;}
    if (i==1) head2=p2;
    else p->next=p2;
    p=p2;
    p1=head1;p3=head1;
    for (j=1;j<=(n-i+1);j++)
     {if (p1->num==p2->num) {if (j==1) head1=p1->next;
                             else p3->next=p1->next;}
      p3=p1;p1=p1->next;
      }
   }
 p=head2;
 for (i=1;i<=n;i++)
  {printf("%s\n",p->num);p=p->next;}
 
}
