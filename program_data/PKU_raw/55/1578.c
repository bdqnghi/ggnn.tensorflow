int main()
{
  char s[100],v[100];
  int a,b,j,i,l,t=0;
  cin>>a;
  cin>>s;  
  cin>>b;
  l=strlen(s);
  int m=1;  
  for(j=0;j<l;j++)
  {
      if(s[j]>='0'&&s[j]<='9')
        s[j]-='0'; 
     if(s[j]>='a'&&s[j]<='z') s[j]-=('a'-10);
      if(s[j]>='A'&&s[j]<='Z') s[j]-=('A'-10);
  } 
  for(i=l-1;i>=0;i--)
  {
    t+=s[i]*m;
    m*=a;
  }
  m=0;
  while(t)
  {
   v[m]=t%b;      
   m++;
   t=t/b;       
  }
  for(i=0;i<m;i++)
  {
    if(v[i]>=0&&v[i]<=9) v[i]+='0';
    else if(v[i]>=10)
      v[i]+=('A'-10);
  }
  for(i=m-1;i>=0;i--)
  cout<<v[i];
  if(m==0)
	  cout<<0; 
}
