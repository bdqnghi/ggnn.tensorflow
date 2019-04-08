int main()
{
    int n;
    int a,b,c;
  
    a=3;
    b=5;
    c=7;
    scanf("%d",&n);
    if (n%a==0&&n%b==0&&n%c==0)
    printf("%d %d %d",a,b,c);
    if (n%a==0&&n%b==0&&n%c!=0)
    printf("%d %d",a,b);
    if (n%b==0&&n%c==0&&n%a!=0)
    printf("%d %d",b,c);
    if (n%a==0&&n%c==0&&n%b!=0)
    printf("%d %d",a,c);
    if(n%a==0&&n%b!=0&&n%c!=0)
     printf("%d",a);
    if(n%a!=0&&n%b==0&&n%c!=0)
     printf("%d",b);
    if(n%a!=0&&n%b!=0&&n%c==0)
     printf("%d",c);
     if(n%a!=0&&n%b!=0&&n%c!=0)
     printf("n");
  
     return 0;
}
    
