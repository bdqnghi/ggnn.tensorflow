void input(int p,int q,int *num1,int *num2)
{
     int i;
     for(i=0;i<p;i++) scanf("%d",num1+i);
     for(i=0;i<q;i++) scanf("%d",num2+i);
}
void sort(int p,int q,int *num1,int *num2)
{
     int i,j,t;
     for(i=0;i<p;i++)
     {
          for(j=0;j<p-1-i;j++)
          {
               if(num1[j]>num1[j+1])
               {
                    t=num1[j];
                    num1[j]=num1[j+1];
                    num1[j+1]=t;
               }
          }
     }
     for(i=0;i<q;i++)
     {
          for(j=0;j<q-1-i;j++)
          {
               if(num2[j]>num2[j+1])
               {
                    t=num2[j];
                    num2[j]=num2[j+1];
                    num2[j+1]=t;
               }
          }
     }
}
void print(int p,int q,int *num1,int *num2)
{
     int i;
     printf("%d",num1[0]);
     for(i=1;i<p;i++) printf(" %d",num1[i]);
     for(i=0;i<q;i++) printf(" %d",num2[i]);
}
main ()
{
     int p,q,*num1,*num2;
     scanf("%d%d",&p,&q);
     num1=(int*)malloc(p*sizeof(int));
     num2=(int*)malloc(q*sizeof(int));
     input(p,q,num1,num2);
     sort(p,q,num1,num2); 
     print(p,q,num1,num2);
     
}
