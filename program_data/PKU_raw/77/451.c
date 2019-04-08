void operation(char str[]);
int num=0;
char boy,girl;
int main()
{
  char str[100];//?50???????????
  cin>>str;
  boy=str[0];
  int i;
  for(i=0;str[0]!='\0';i++)
  {
    if(str[i]!=boy)
{
girl=str[i];
break;
}
  }
  //cout<<boy<<girl;
  operation(str);
  return 0;
}
void operation(char str[])
{
  int i,j;
  int counter=0;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==boy)
{
  for(j=i+1;;j++)
  {
if(str[j]==boy)
break;
    if(str[j]==girl)
{
cout<<i<<" "<<j<<endl;
        str[i]='e';
        str[j]='e';
        counter=1;
        num++;
break;
}
  }
}
if(counter==0)
continue;
else
break;
  }
  if(num<strlen(str))//strlen?????????????
  operation(str);
}
