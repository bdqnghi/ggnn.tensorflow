int main()
{
    char s1[1000], s2[1000], str1[1000], str2[1000];
    int i, len1, len2, j, sum[1000]={0}, max, num1[1000]={0}, num2[1000]={0}, hash=0;
    cin.getline(s1,1000);
    cin.getline(s2,1000);
    len1=strlen(s1);
    len2=strlen(s2);
    for( i=0; i<len1; i++ )
    {
        str1[i]=s1[len1-1-i];   
        num1[i]=(int)(str1[i]-'0');            
    }
    for( i=0; i<len2; i++ )
    {
        str2[i]=s2[len2-1-i]; 
        num2[i]=(int)(str2[i]-'0');
    }
    if(len1>=len2)
        max=len1;
    else
        max=len2;
    for( i=0; i<max; i++ )
    {
        sum[i]+=num1[i]+num2[i];
        if(sum[i]>=10)
        {
            sum[i+1]+=1;
            sum[i]-=10;          
        } 
    }
    while(sum[max]) max++;
    while((max>1)&&(!sum[max-1])) max--;
    for( i=max-1; i>=0; i-- )
    {
        cout<<sum[i];
    }
    int x;cin>>x;
    return 0;
}
