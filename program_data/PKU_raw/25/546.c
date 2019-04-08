int main()
{
    int n,i,num[150]={0},len,k,m,j;
    char str[150]={'\0'};
    cin>>m;
    str[0]='1';
    for(j=1;j<=m;j++)
{
    len=strlen(str);
    k=0;
    for(i=len-1;i>=0;i--)
    {
        n=str[i]-'0';
        num[k]=n*2;
        k++;
    }  
    for(i=0;i<120;i++)
    {    
         // cout<<num[i]<<' '<<num[i+1]<<' ';
        num[i+1]=num[i+1]+num[i]/10;
        num[i]=num[i]%10;
       // cout<<num[i]<<' '<<num[i+1]<<endl;
    }
    
    
       
    i=140;
    while(num[i]==0)   i--;
    k=0;
    for(;i>=0;i--)
    {
        str[k]=num[i]+'0';
        k++;
    }
    
}
    i=140;
    while(num[i]==0)   i--;
    for(;i>=0;i--)
       cout<<num[i];             
    if(m==0)   cout<<1;
    
    
        return 0;
}
