
int main()
{
    int n;
    int i,j,m;
    int a,b;
    
    scanf("%d",&n);
    if(n==1||n==2||n==3||n==4)
    printf("empty");
    else
    { for(i=3;i<=(n-2);i++)
        {
        for(j=2;j<i;j++)
           {
           if(i%j==0)
           break;
           }
        if(j==i)
           { a=i;
           b=i+2;
           for(m=2;m<b;m++)
            {
            if(b%m==0)
            break;
            }
        if(m==b)
        printf("%d %d\n",a,b);} 
       
        
        }
    } 
       return 0;

}        
      