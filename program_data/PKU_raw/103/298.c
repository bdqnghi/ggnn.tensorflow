int main()
{
    int x,y,i,len,j,num=0;
    char str[1200]={'\0'},a;
    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>=97)    str[i]=str[i]-32;
    }
    num=1;
    for(i=0;i<len;i++)
    {
       if(str[i]==str[i+1])   num++;
       else
       {
           cout<<'('<<str[i]<<','<<num<<')';
           num=1;
       }
    }
    
    
    
    
    return 0;
}
