
int main()
{
    char word[105],sign[105];
    int num=0,i,len;
    while(cin.getline(word,105))
    {
           num=0;
       len=strlen(word);
    for(i=0;i<len;i++)
    sign[i]=' ';
    for(i=0;i<len;i++)
    {
           if(word[i]=='(')
              num++;
           if(word[i]==')')
           {
                  if(num>0)
                  num--;
                  else sign[i]='?';
           }
    }
    num=0;
    for(i=len-1;i>=0;i--)
    {
           if(word[i]==')')
              num++;
           if(word[i]=='(')
           {
                  if(num>0)
                  num--;
                  else sign[i]='$';
           }
    }
    sign[len]='\0';
    cout<<word<<endl;
    cout<<sign<<endl;
    }
    return 0;
}
