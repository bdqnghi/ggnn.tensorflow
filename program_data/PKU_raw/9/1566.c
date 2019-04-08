int main(int argc, char *argv[])
{
  struct fy{
         char a[12];
         int k;
         int s;
         struct fy *p;
         }x[100],*head;
  int n,i,j,l,kk,ss;
  char aa[12];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%s %d",x[i].a,&x[i].k);
     x[i].s=x[i].k>=60?1:0;
     x[i].p=&x[i+1];
  }
  head=&x[0];
  x[n-1].p=NULL;
  for(i=0;i<n;i++)
  {
       for(j=i+1;j<n;j++)
       {
             if(x[i].s==1&&x[j].s==1)
             {
                  if(x[i].k<x[j].k)
                  {
                       kk=x[j].k;
                       ss=x[j].s;
                       strcpy(aa,x[j].a);
                       for(l=j;l>i;l--) 
                       {   
                           x[l].k=x[l-1].k;
                           x[l].s=x[l-1].s;
                           strcpy(x[l].a,x[l-1].a);
                       }
                         x[i].k=kk;
                  x[i].s=ss;
                  strcpy(x[i].a,aa);
                  }
                
             }
       }
       if(x[i].s==1)
       printf("%s\n",x[i].a);
  }
  while(head!=NULL)
  {
       if(head->s==0)
       printf("%s\n",head->a);
       head=head->p;
  }
  return 0;
}
