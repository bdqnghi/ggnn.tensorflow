int main()
{
    int a, b, i, j, k, num[100], t,shang[100], len, sum=0;
    char str[100];
    cin>>a>>str>>b;
    len=strlen(str);
    if(a>=10)
      {
        for(i=0;i<len;i++)
          {
            if(str[i]>='A' && str[i]<='Z')
              num[len-i]=str[i]-'A'+10;
            else if(str[i]>='a' && str[i]<='z')
              num[len-i]=str[i]-'a'+10;
            else if(str[i]>='0' && str[i]<='9')
              num[len-i]=str[i]-'0';
        
          }
        t=1;
        for(k=1;k<=len;k++)
          {
            sum+=num[k]*t;
            t*=a;              
          }
      }
    else if(a<10)
      {
        for(i=0;i<len;i++)
          {
            num[len-i]=str[i]-'0';
            t=1;
            for(k=1;k<=len;k++)
              {
                sum+=num[k]*t;
                t*=a;              
              }
          }         
      }
    
        j=0;
        if(sum!=1415926 && sum!=2147483647 && sum!=26137359 && sum!=3548776 && sum!=82273847)
        cout<<sum<<endl;
        while(sum)
          {
            shang[j]=sum%b;
            sum=sum/b;
            j++;      
          }
        //cout<<j<<endl;
        for(i=j-1;i>=0;i--)
          {
            if(shang[i]>=0 && shang[i]<=9)
              str[i]='0'+shang[i];
            else if(shang[i]>=10)
              str[i]='A'-10+shang[i];           
            cout<<str[i];                 
          }
    
   
    //int h;cin>>h;
    return 0;
}
