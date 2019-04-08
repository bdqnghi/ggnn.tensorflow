int main()
{
int n,x=1;
scanf("%d ",&n);
for (int i=0;i<n;i++)
   {
   x=1;
   char c[85];
   gets(c);
   if (!(c[0]=='_'||(c[0]>='a'&&c[0]<='z')||(c[0]>='A'&&c[0]<='Z'))) {printf("0\n");continue;} 
   for (int j=1;c[j]!='\0';j++)
      {
      if (c[j]=='_'||(c[j]>='0'&&c[j]<='9')||(c[j]>='a'&&c[j]<='z')||(c[j]>='A'&&c[j]<='Z')) continue;
      else {x=0;break;}
      }
   printf("%d\n",x);
   }
}
