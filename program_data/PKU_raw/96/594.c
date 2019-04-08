char num[105];
int begin[105]={0},temp=0,len,i;
int main()
{
    cin.getline(num,105);
    len=strlen(num);
    for(i=0; i<len; i++)
        begin[i]=num[i]-'0';
    if(len==1) cout<<"0"<<endl<<begin[0]<<endl;
    else if(len==2)
    {
           temp=begin[0]*10+begin[1];
           cout<<temp/13<<endl;
           cout<<temp%13<<endl;
    }
    else if(len>2)
    {
           temp=begin[0]*10+begin[1];
           if(temp>=13)
           {
                  cout<<temp/13;
                  temp=temp%13;
           }
           for(i=2;i<len;i++)
           {
                  temp=temp*10+begin[i];
                  cout<<temp/13;
                  temp=temp%13;
           }
           cout<<endl<<temp<<endl;
    }

    return 0;
}
