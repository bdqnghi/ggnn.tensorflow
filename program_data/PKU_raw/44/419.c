int main()
{
    int n,i;
    int reverse(int num);
    for(i=1;i<=6;i++)
    {
                     scanf("%d",&n);
                     printf("%d\n",reverse(n));
    }
    return 0;
}
int reverse(int num)
{
    int x,m,i,s,t,yu,j;
    
    if(num==0) return 0;
    else{
         if(num>0){
         x=num;
         s=2;
         t=0;
    while(1)
    {
            if(num%10==0) {num=num/10;t++;}
            else
            break;
    }
    while(1)
    {
            if(x/10>9) {s=s+1;x=x/10;}
            else
            {break;}
    }
    s=s-t;
    if(s==1) return num;
    else{
         int result=0;
    for(i=1;i<=s-1;i++)
    {
           yu=num%10;
           num=num/10;
           for(j=1;j<=s-i;j++)
           yu=yu*10;
           result=result+yu;          
    }
    result=result+num;
    return result;
    }
}
    if(num<0)
    {
             printf("-");
             num=-num;
              x=num;
         s=2;
         t=0;
    while(1)
    {
            if(num%10==0) {num=num/10;t++;}
            else
            break;
    }
    while(1)
    {
            if(x/10>9) {s=s+1;x=x/10;}
            else
            {break;}
    }
    s=s-t;
    if(s==1) return num;
    else{
         int result=0;
    for(i=1;i<=s-1;i++)
    {
           yu=num%10;
           num=num/10;
           for(j=1;j<=s-i;j++)
           yu=yu*10;
           result=result+yu;          
    }
    result=result+num;
    return result;
    } 
    }
}
}