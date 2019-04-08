int main()
{
 char s[1000];
 gets(s);
 int i;
 int count=1;
 int a[1000];
 for(i=0;i<100;i++)
 a[i]=1;
 for(i=1;s[i-1]!='\0';i++)
 {
  if(s[i]==s[i-1]|| s[i]-s[i-1]==32||s[i]-s[i-1]==-32)
  a[count]++;
  else
  {
   if(s[i-1]>'Z'||s[i-1]<'A')
   {
     printf("(%c,%d)",s[i-1]-32,a[count]);
     count++;
    }
   else
   {
    printf("(%c,%d)",s[i-1],a[count]);
    count++;
   }
}
 }
 getchar();
}
