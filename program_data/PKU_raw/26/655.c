int main()
{char a[150],b[150],s=0;
gets(a);
int l=strlen(a);
for (int i=0;i<=l-1;i++)
 {
  if (a[i]!=' '){s++;b[s]=i;}
  if (a[i]==' '){s++;b[s]=i;
  while (a[i+1]==' ')i++;}
 }
for (int i=1;i<=s;i++)
 {
  int j=b[i];cout<<a[j];
  //while (a[j]!=' '){j++;cout<<a[j];}
 }
return 0;
}
