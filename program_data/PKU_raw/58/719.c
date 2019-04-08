char s[100];
int l;
int check()
{
 int i;
 if((s[0]<'A' || s[0]>'Z')&&(s[0]<'a' || s[0]>'z')&&(s[0]!='_')) return 0;
 for(i=0;i<l;i++)
  if((s[i]<'A' || s[i]>'Z')&&(s[i]<'a' || s[i]>'z')&&(s[i]!='_')&&(s[i]<'0' || s[i]>'9')) return 0;
 return 1;
}
int main()
{
int n,i,j;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
 for(j=0;j<=99;j++)
	s[j]=0;
 l=0;
 scanf("%c",&s[0]);
 while(s[l]!='\n')
 {
	l++;
	scanf("%c",&s[l]);
 }
 
 printf("%d\n",check());
}
return 0;
}