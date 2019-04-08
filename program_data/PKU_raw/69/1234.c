int main()
{
    int x,j,i,l,t,q=0,w=0,y,m[300]={0},n[300]={0},k[300]={0};
    char a[300],b[300];
    scanf("%s %s",&a,&b);
    x=strlen(a);
    y=strlen(b);
    
    for(i=x;i>=0;i--) {m[i]=a[i]-'0';if(m[i]==0) q+=1;}
    for(i=y;i>=0;i--) {n[i]=b[i]-'0';if(n[i]==0) w+=1;}
    if(q==x&&w==y) {printf("0");return 0;}
    if(x>=y)
    {
        l=x;
        for(i=x;i>=x-y+1;i--) 
        {    
            k[i]=k[i]+m[i-1]+n[i-x+y-1];
            if(k[i]>=10)
            {
                k[i]=k[i]-10;
                k[i-1]=k[i-1]+1;    
            }
        }
        for(i=x-y;i>0;i--) 
        {
            k[i]=k[i]+m[i-1];
            if(k[i]>=10)
            {
                k[i]=k[i]-10;
                k[i-1]=k[i-1]+1;    
            }
        }
    }
    if(x<y)
    {
        l=y;
        for(i=y;i>=y-x+1;i--) 
        {    
            k[i]=k[i]+n[i-1]+m[i-y+x-1];
            if(k[i]>=10)
            {
                k[i]=k[i]-10;
                k[i-1]=k[i-1]+1;
            }
        }
        for(i=y-x;i>0;i--) 
        {
            k[i]=k[i]+n[i-1];
            if(k[i]>=10)
            {
                k[i]=k[i]-10;
                k[i-1]=k[i-1]+1;    
            }
        }
    }
    //printf("%d %d %d",k[0],k[1],k[2]);
    memset(a,0,sizeof(a));
    for(i=0;i<=l;i++)
    {
        if(k[i]!=0) {j=i;t=l+1-j;break;}
    }
    for(i=0;i<=t-1;i++) 
    {
        a[i]=k[j+i]+'0';
    }
    printf("%s",a);
    return 0;
}
