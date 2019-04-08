
int main()
{
     int a[10000],b[10000];
     int i,j,flag,m,n;
     scanf("%d",&n);
     for(m=0;m<n;m++)
        {
         a[m]=0;b[m]=0;
        }
         for(;;)
           {               
           scanf("%d %d",&i,&j);
           if(i==0&&j==0)
           break;
           else
           {
            a[i]++;b[j]++;  
            }   
           
           }
              for(j=0,flag=0;j<n;j++)
              {
                if(b[j]==(n-1)&&a[j]==0)
                   {
                       printf("%d",j);
                       flag=1;
                    }
              }
     if(flag==0)
     printf("NOT FOUND\n");
     return 0;
     
}
