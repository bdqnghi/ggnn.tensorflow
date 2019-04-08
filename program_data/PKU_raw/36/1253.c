
int main()
{
  int i,a[129]={0},b[129]={0};
  char c;
  scanf("%c",&c);
  while(c!=' ')
  { 
    a[(unsigned short)c]++;
    scanf("%c",&c);
  }
  scanf("%c",&c);
  while(c!='\n')
  { 
    b[(unsigned short)c]++;
    scanf("%c",&c);
  }
  for(i=1;i<=128;i++)
  {
     if(a[i]!=b[i]) break;
  }
  if(i>128) printf("YES");
  else printf("NO");
  return 0;
}