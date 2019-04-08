int main()
{  char a[1000][42];
   int sum,i,j,k,n,m;
   cin>>n;
   sum=0;
   for (i=1;i<=n;i++)
        {cin >>a[i]; 
         m=strlen(a[i]);
         if (sum+m+1<=80) 
             if (sum!=0)
                  { cout<<" "<<a[i];
                    sum=sum+m+1; 
                    }
              else { cout<<a[i]; 
                     sum=sum+m; 
                      }        
         else { cout<<endl;
                cout<<a[i];
                sum=0;
                sum=sum+m;         
                   }   
         }
    return 0;   
    
    
    
    
    
    
    }
