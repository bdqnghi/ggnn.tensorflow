int main()
{ int n,i,j,flag=1;
  char a[81];
  cin>>n;cin.get();
  for(i=1;i<=n;i++)
  {cin.getline(a,81);
   if(!(a[0]>='a'&&a[0]<='z'||a[0]>='A'&&a[0]<='Z'||a[0]=='_')) 
       {cout<<0<<endl;continue;}//?????
   else{ for(j=1;a[j]!='\0'&&flag;j++)
          if(!(a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z'||a[j]=='_'||a[j]>='0'&&a[j]<='9')) //???????
              flag=0;
         cout<<flag<<endl;
       }
    flag=1;
  }
  return 0;
}
