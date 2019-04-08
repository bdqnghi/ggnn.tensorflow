int main()
{
    int n,m,i,j,t,k,num[510]={0},max,sum=0;
    char str[510],a[510][6];
    scanf("%d%s",&n,str);
    m=strlen(str);
    for(i=0;i<=(m-n);i++)
   { for(j=0;j<n;j++)
       a[i][j]=str[i+j];
     for(k=0;k<=(m-n);k++)
     {
        t=strcmp(a[i],a[k]);
        if(t==0)
        {
          num[k]=num[k]+1;
          break;
        }
    
     } 
   }
    max=num[0];
    for(i=0;i<=(m-n);i++)
    {
       if(num[i]>max)  max=num[i];
    }
    if(max==1) printf("NO");
    else 
    {
       
       printf("%d\n",max);
       for(i=0;i<=(m-n);i++)
       {
           if(num[i]==max)
           printf("%s\n",a[i]);
       }
    }  
   

     return 0;
    
    
}