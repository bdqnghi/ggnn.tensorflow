int main()
{
 char s[31];
 int i,j,k,l;
 gets(s);
 for(i=0;i<31;i++)
  {if(s[i]>='0'&&s[i]<='9') printf("%c",s[i]);
  if(s[i]>='0'&&s[i]<='9'&&!(s[i+1]>='0'&&s[i+1]<='9')) printf("\n");
}
}