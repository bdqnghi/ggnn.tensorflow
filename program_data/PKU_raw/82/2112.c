
int main()
{
    int i,n,c,k;
   
    c=k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&(a[i]),&(b[i]));
        if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&b[i]<=90)
        {c++;}
        else{
        if(c>k)
        {
            k=c;
            
        }
        c=0;
        }
    }
    if(c>k){printf("%d",c);}
    else printf("%d",k);
    
    
    
    return 0;
}
