int main()
{
    int a1[266]={0},a2[266]={0};
    int len1,len2;
    char b1[266],b2[266];
    cin.getline(b1,266);
    cin.getline(b2,266);
    len1=strlen(b1);//?? 
    len2=strlen(b2);
    if(len1==1&&len2==1&&b1[0]=='0'&&b2[0]=='0')
    cout<<0<<endl;
    else{
         int i=0,j=0;
    for(i=len1-1;i>=0;i--)
      a1[j++]=b1[i]-'0';//??????????? 
    j=0;
    for(i=len2-1;i>=0;i--)
      a2[j++]=b2[i]-'0';
    for(i=0;i<=266;i++)
    {
       a1[i]+=a2[i];
       if(a1[i]>=10)
       {
          a1[i]-=10;
          a1[i+1]++;
       }  
    }
    i=265;
    while(a1[i]==0)i--;
    for(;i>=0;i--)
    cout<<a1[i];
    cout<<endl;}
    return 0; 
} 
    
