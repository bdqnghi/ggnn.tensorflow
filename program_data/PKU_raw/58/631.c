int main()
{
 int n,i,j,k,len;
 char str[81];
 cin>>n;
 cin.get();
 for(i=1;i<=n;i++)
 {
  k=1;
  cin.getline(str,81,'\n');
  if(str[0]<'A'||(str[0]>'Z'&&str[0]<'_')||(str[0]>'_'&&str[0]<'a')||str[0]>'z')
   k=0;
  len=strlen(str);
  for(j=1;j<len;j++)
   if(str[j]<'0'||(str[j]>'9'&&str[j]<'A')||(str[j]>'Z'&&str[j]<'_')||(str[j]>'_'&&str[j]<'a')||str[j]>'z')
    {
     k=0;
     break;
    }
   cout<<k<<endl;
 }
 return 0;
}