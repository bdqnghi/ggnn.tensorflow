int main()
{
 int n,a[100000],b[100000],A[100000]={0},B[100000]={0},c=0,num=0,bp=0;
 scanf("%d",&n);
 for(int i=0;;i++)
         {scanf("%d %d",&a[i],&b[i]);
          if(a[i]==0&&b[i]==0)break;
          else
          num++;
          
          }
 for(int i=0;i<n;i++)
        {
         for(int j=0;j<num;j++)
         {if(a[j]==i)
         A[i]++;         
         if(b[j]==i)
         B[i]++;}            
        }
 for(int i=0;i<n;i++)
        {
         
         if(A[i]==0&&B[i]==n-1)
               {
                printf("%d",i);
                c++;               
               }
                                             
        }
 if(c==0)
 printf("NOT FOUND");
 getchar(); 
 getchar();    
}