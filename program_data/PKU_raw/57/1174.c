int main()
{
int n,m,i,a;
scanf("%d",&n);
char s[300];
int len;
for(i = 0; i < n; i++){
   scanf("%s", s);
   len = strlen(s);
   if(len>3)
   {
    if(s[len-1]=='r'&&s[len-2]=='e')
       s[len-2]='\0';
    else if(s[len-1]=='y'&&s[len-2]=='l')
         s[len-2]='\0';
    else if(s[len-1]=='g'&&s[len-2]=='n'&&s[len-3]=='i')
       s[len-3]='\0';
      printf("%s\n", s);
     }
    else printf("%s\n", s);
}
return 0 ;
}