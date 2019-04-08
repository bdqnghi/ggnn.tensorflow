int main()
{ char a[205];
  while (cin.getline(a,200))
         { char b[205];
           int x[205]={-1},y[205]={-1},i,j,k,n,p,q;
           p=0;
           q=0;
           n=strlen(a);
           for (i=0;i<n;i++)
                b[i]=' ';
           for (i=0;i<n;i++)
               { 
                    if (a[i]=='(')
                    { p++;
                      x[p]=i;
                        }
                  if (a[i]==')')
                    { q++;
                      y[q]=i;
                      if ((p!=0)&&(x[p]<y[q]))
                         { x[p]=-1;
                           y[q]=-1;
                           p--;
                           q--;
                          }
                    }
                    }
          for (i=1;i<=p;i++)
               b[x[i]]='$' ;
          for (i=1;i<=q;i++)
               b[y[i]]='?' ;
          cout<<a<<endl;      
          for (i=0;i<n;i++)
               cout<<b[i];
          cout<<endl;
              }
   return 0;        
    
    }
