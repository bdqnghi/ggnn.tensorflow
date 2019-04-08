
struct Student
{char sex[10];
 double h;
};

int Compare1(const void* e1,const void *e2)
{
    return(*((int*)e1)-*((int*)e2));
}


main()
{
      int n,i,j,k,l,q;
      double a;
      struct Student num[50];
      double m[50]={0};
      double f[50]={0};
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%s",num[i].sex);
          scanf("%lf",&num[i].h);
      }
      j=0;
      k=0;
      for(i=0;i<n;i++)
      {
          
          if(num[i].sex[0]=='m')
          {  
              m[j]=num[i].h;
              j++;
              
          }
          else
          {
              f[k]=num[i].h;
              k++;
            
          }
      }
     for(l=0;l<j-1;l++)
     {
         for(q=0;q<j-1-l;q++)
         {
             if(m[q]-m[q+1]>0)
             {a=m[q];
             m[q]=m[q+1];
             m[q+1]=a;
             }
         }
     }     
      for(l=0;l<k-1;l++)
     {
         for(q=0;q<k-1-l;q++)
         {
             if(f[q]*100-f[q+1]*100<0)
             {a=f[q];
             f[q]=f[q+1];
             f[q+1]=a;
             }
         }
     }     
     
     
     for(j=0;m[j]!=0;j++)
         printf("%.2lf ",m[j]);
     for(k=0;f[k+1]!=0;k++)
         printf("%.2lf ",f[k]);      
      printf("%.2lf",f[k]);
      
    }
