int main()
{ int i,j,l1,l2,a1[301],a2[301],a3[301];
  char s1[253],s2[253];
  cin.getline(s1,253);
  cin.getline(s2,253);
  l1=strlen(s1);
  l2=strlen(s2);
  j=0;
  memset(a1,0,sizeof(a1));
    memset(a2,0,sizeof(a2)); 
	   memset(a3,0,sizeof(a3)); 
  for(i=l1-1;i>=0;i--)
  { a1[j++]=s1[i]-'0';}
   j=0;
  for(i=l2-1;i>=0;i--)
  { a2[j++]=s2[i]-'0';}
  for(i=0;i<299;i++)
  {   a3[i]+=a1[i]+a2[i];
  if(a3[i]>=10)
  { a3[i+1]++;
	a3[i]-=10;}
  }
  i=299;
  while(a3[i]==0&&i>0)i--;
  for(;i>=0;i--)
  {cout<<a3[i];}
  

return 0;}