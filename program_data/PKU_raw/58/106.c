int main()
{
    int n,i,j,k,m,sum,h;
    char c[100];char a[0];
    
    gets(a);
    n=atoi(a);
    for(i=1;i<=n;i++)
    {    
         for(h=0;h<100;h++)
         c[h]=0;
         
         sum=0;
     gets(c);
        k=strlen(c);
      
   if(c[0]!='_'&&(c[0]<65||c[0]>122||(c[0]>90&&c[0]<97)))
                        {printf("0\n");}
                      
                    else
                    {for(j=1;j<k;j++)
                    {
                                       if((c[j]>47&&c[j]<58)||(c[j]>64&&c[j]<91)||(c[j]>96&&c[j]<123)||c[j]=='_')
                                       sum=sum+1;
                                       else
                                       break;
                                       }
                                        if(sum==k-1) 
                                        printf("1\n");      
                                        else
                                        printf("0\n");
                                        }  }getchar();getchar();getchar();getchar();}            
