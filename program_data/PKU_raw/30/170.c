int Dec();
int Dec(int x)
{ int i;
    if((x==7)||(x==17)||(x==27)||(x==37)||(x==47)||(x==57)||(x==67)||(x==77)||(x==87)||(x==97)) return 0;
    for(i=7;i<=100;i=i+7)
    {
        if(x==i) return 0;                  
    }    
    if((x<80)&&(x>69)) return 0;
    return 1;
}
int main()
{ int i,n;
scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n;i++)
    {   if (Dec(i)==1) sum=sum+i*i;   
    }
printf("%d",sum);
}
