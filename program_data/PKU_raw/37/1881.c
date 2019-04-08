int main()
{
    int t,i,j,k,count=0;
    char a[100000];
    int b[100000]={0}; 
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        memset(a,'\0',100000); 
        memset(b,0,400000);
        count=0;
        scanf("%s",a);
        for(i=0;a[i];i++)//??????????? 
        for(j=0;j<=i;j++) 
        {
            if(a[i]==a[j])
            {b[j]++;break;}
        }
        for(i=0;a[i];i++)
        {
        if(b[i]==1)
        {printf("%c\n",a[i]);count++;break;}     
        }    
        if(count==0)printf("no\n");
        
     }     

     return 0;
}          