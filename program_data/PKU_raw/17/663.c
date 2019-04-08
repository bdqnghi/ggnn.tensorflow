int k,m=0;
char a[100]={'\0'};
void pipei(int m,char a[])
{  
   int i,j;
 for(i=m;i<=k-1;i++)
  {
    if(a[i]==')') {break;}
    if(a[i]!='('&&a[i]!=')') {a[i]=' ';}
  }
  m=i+1;
 for(j=i;j>=0;j--)
  {
    if(i==k&&a[k-1]!=')') break;
    if(a[j]=='(') {a[j]=' ';a[i]=' ';break;}
  }
  if(m<=k-1) pipei(m,a);
}
int main()
{    
  char w;
  while(cin>>a)
   {  
     k=strlen(a);
      int i,j;          
     cout<<a<<endl;
      pipei(0,a);
     for(i=0;i<=k-1;i++)
       {
          if(a[i]=='(')
           a[i]='$';
          if(a[i]==')')
           a[i]='?';
       }
       for(i=0;i<=k-1;i++)
       cout<<a[i];
       cout<<endl;
      for(i=0;i<100;i++)
      { a[i]='\0';} 
   }
  
  return 0;
}
            