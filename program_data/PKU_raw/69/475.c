

int main()
{
    char str1[250],str2[250];    
    int a[250],b[250],c[250]={0};  
    int x1,x2,i,j,k=0,l;
  scanf("%s\n",str1);
  scanf("%s",str2);
  x1=strlen(str1);
  x2=strlen(str2);
    for(i=0;i<x1;i++)
        a[i]=str1[i]-'0';
    for(i=0;i<x2;i++)
        b[i]=str2[i]-'0';                 
    for(i=x1-1,j=x2-1;j>=0&&i>=0;j--,i--)
    {
        c[k]=a[i]+b[j]+c[k];
        c[k+1]=c[k]/10;
        c[k]=c[k]%10;
        k++;
    }                                                
    if(i>=0)                            
        for(l=i;l>=0;l--)
        {
            c[k]=a[l]+c[k];
            c[k+1]=c[k]/10;
            c[k]=c[k]%10;
            k++;
        }
    else                                                          
        for(l=j;l>=0;l--)
        {
            c[k]=b[l]+c[k];
            c[k+1]=c[k]/10;
            c[k]=c[k]%10;
            k++;
        }
        int r=k;
       for(i=0;i<=k-1;i++)
         {if(c[k-i]==0)
           r=k-i-1;
           else
           i=k+1;
           
         }
    for(l=r;l>=0;l--)
        printf("%d",c[l]);
  
}
