int main()
{
    int n,a,c;
    scanf("%d",&n);
    c=0;
    if(n!=0)
    for(;n!=0;n=n/10)
    {
    a=n%10;
    printf("%d",a);
    
             }
    else 
     printf("0");
    return(0);
    
    
}