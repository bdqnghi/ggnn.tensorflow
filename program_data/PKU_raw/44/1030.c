
int main()
{
    int j;
    int reverse(int num);
    int a[6]={0};
    for(j=0;j<6;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<6;j++)
    {
        printf("%d\n",reverse(a[j]));           /*??*/ 
    }
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();

}
int reverse(int num)
{
    int i,k,b=0,m=1,jud=0,c=-1;
    int s[100]={0};
    if(num<0)
    {
        num=-num;
        jud++;                 /*jud????*/
    }
        
    
         for(i=0;num>0;i++)
        {
            s[i]=num%10;     /*????????????? s ?*/ 
            num=num/10;
            c++;
        }
        for(i=0;i<=c;i++)
        {
            for(k=0;k<c-i;k++)
            {
                m=m*10;
            }
            b=b+s[i]*m;                /*???????*/
            m=1;
        }
        for(i=0;i<100;i++)
        s[i]=0;
    
        if(jud)
        {
            b=0-b; 
              
        }
    
    return(b);
}
