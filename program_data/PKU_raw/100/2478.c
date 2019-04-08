int main()
{ int a[26]={0},i=0,b[26]={0},d[26]={0},x[26]={0},n=0,j=0,t=0;
char c[305]={'\0'};
  scanf("%s",c);
  n=strlen(c);
  for(i=0;i<26;i++)
  { a[i]=65+i;
    b[i]=97+i;
                   }
    for(i=0;i<n;i++)
    {  for(j=0;j<26;j++)
         { if(c[i]-a[j]==0) d[j]++;
           else if(c[i]-b[j]==0) x[j]++;
           
                        }
                    }
    for(i=0;i<26;i++)
    { if(d[i]!=0||x[i]!=0)
         {t=1;
          break;
         }
                     }
    if(t==0) printf("No");
    else 
    { for(i=0;i<26;i++)
        { if(d[i]!=0) printf("%c=%d\n",a[i],d[i]);
                       }
        for(i=0;i<26;i++)
        {  if(x[i]!=0) printf("%c=%d\n",b[i],x[i]);
                         }
         }
 
    return(0);
    }