int main()
{
    int sum1=0, sum2=0, len1=0, len2=0, i, a[60], b[60];
    char str1[60],str2[60];
    cin.getline(str1,60);
    
    cin.getline(str2,60);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;i<len1;i++)
      {
        a[i]=(int)str1[i];
        if(a[i]>=65 && a[i]<=90 )
          {
            a[i]+=32;                
          }
        sum1+=a[i];                
      }
    for(i=0;i<len2;i++)
      {
        b[i]=(int)str2[i];
        if(b[i]>=65 && b[i]<=90 )
          {
            b[i]+=32;                
          }
        sum2+=b[i];                
      }
      
    if(sum1>sum2)
      {
        cout<<">";         
      }
    else if(sum1<sum2)
      {
        cout<<"<";         
      }
    else if(sum1=sum2)
      {
        cout<<"=";         
      }
    int h;cin>>h;
    return 0;
    
    
    }
