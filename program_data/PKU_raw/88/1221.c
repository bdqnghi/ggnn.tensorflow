int main()
{
 char c[31];
 int i,j,k;
 cin.getline(c,31,'\n');
 for(i=0;i<strlen(c);i++)
 {
  if(c[i]>='0'&&c[i]<='9')
   cout<<c[i];
  if(c[i-1]>='0'&&c[i-1]<='9'&&(c[i]<'0'||c[i]>'9'))
  {
   k=0;
   for(j=i+1;j<strlen(c);j++)
    if(c[j]>='0'&&c[j]<='9')
     k=1;
   if(k==1)
    cout<<endl;
  }
 }
 return 0;
}