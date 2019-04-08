int main()
{
int n,m,i,a;
scanf("%d",&n);
char s[300];
int len;
a=0;
for(i = 0; i < n; i++){
   scanf("%s", s);
   len = strlen(s);
     if((s[0]>=65&&s[0]<=90)||s[0]==95||(s[0]>=97&&s[0]<=122))
    {
          a=0;
      for(m=0;m<len;m++)
      {
          if((s[m]>=65&&s[m]<=90)||s[m]==95||(s[m]>=97&&s[m]<=122)||(s[m]>=48&&s[m]<=57))
         a=a;
          else a++;
       }
     }
      else a++;
   if(a==0)
   printf("yes\n");
   else printf("no\n");
}
return 0;
}