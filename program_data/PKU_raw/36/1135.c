int main()
{ char p1[500],p2[500];
  scanf("%s",p1);
  scanf("%s",p2);
  int n,i,j,m;
  m=strlen(p1);
  n=strlen(p2);
  int num1[26],num2[26];
  char alpha[26];
  for(i=0;i<26;i++)
  {
  	num1[i]=0;num2[i]=0;
  	alpha[i]='a'+i;
  }
  for(i=0;i<m;i++)
  {
  	for(j=0;j<26;j++)
    { if(p1[i]==alpha[j])
      num1[j]++;}
  }
  for(i=0;i<n;i++)
  {
  	for(j=0;j<26;j++)
    { if(p2[i]==alpha[j])
      num2[j]++;}
  }
  int count=0;
  for(i=0;i<26;i++)
  {if(num1[i]==num2[i])
   count++;}
  if(count==26)
  printf("YES\n");
  else printf("NO\n");
  return 0;
}
