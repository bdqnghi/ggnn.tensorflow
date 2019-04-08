int main()
{
  char s[1000],s1[1000]={'\0'};
  int i,j,n;
  void change(char s[],char s1[],int n);
  gets(s);
  change(s,s1,strlen(s));
  puts(s1);
  return 0;
}
 void change(char s[],char s1[],int n)
 {
  int i;
  char*p=s;
  for(i=0;i<n-1;i++,p++)
   s1[i]=*p+*(p+1);
  s1[n-1]=*s+s[n-1];
}