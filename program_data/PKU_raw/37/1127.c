int main()
{  
   int t,i,j,k,l,m;
   char a[100000];
   scanf("%d\n",&t);
   for(i=0;i<t;i++)
    {   for(m=0;m<100000;m++)
         a[m]='\0';
       gets(a);
       for(m=100000;m>=0;m--)
         {if(a[m]!='\0')
           {l=m+1;
            break;
            }
            } 
      for(j=0;j<l;j++)
         {for(k=0;k<l;k++)
            {if(a[k]==a[j]&&k!=j)
                  break;
            }            
           if(k==l)
            {printf("%c\n\n",a[j]);
             break;
             
            }          
         }
        if(j==l-1)
        printf("no\n\n");   
    }
}