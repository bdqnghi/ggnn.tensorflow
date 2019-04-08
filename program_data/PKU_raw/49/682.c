int main()
{   char a[500]={0};
    char b;
    int i=0;
    while(1)
      {  b=cin.get();
         if(b=='\n')  break;
         else  
         {  a[i]=b;
            i=i+1;
         }
      } 
    int j;
    int k;
    int l;
    int m;
    int u;
    for(j=2;j<=i;j++)
        {   for(k=0;k<i-j+1;k++) 
               { m=0;
                 for(l=k;l<k+j;l++)
                      {  if(a[l]!=a[2*k+j-1-l])   m=1;
                      }
                 if(m==0)  
                   {  for(u=k;u<k+j;u++)   cout<<a[u];
                      cout<<endl;
                   }
                 
               }
        }
    return 0;
}