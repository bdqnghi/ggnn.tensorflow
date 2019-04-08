main()
{
 int i,j,a,b,x,n;
 long temp;
 char s[10];
 char p[10];
 scanf("%d %s %d",&a,s,&b);
 n=strlen(s);
 temp=0;
 for(i=0;i<n;i++)
 {
  if(s[i]>='a'&&s[i]<='z')
   temp=temp*a+s[i]-'a'+10;
  if(s[i]>='A'&&s[i]<='Z')
   temp=temp*a+s[i]-'A'+10;
  if(s[i]>='0'&&s[i]<='9')
   temp=temp*a+s[i]-'0';
 }
 for(x=0,i=0;;i++)
 {
  if(temp%b>=10) p[x]=temp%b-10+'A';
   else p[x]=temp%b+'0';
  x++;
  temp=temp/b;
  if (temp==0) break;
 }
 for(i=x-1;i>=0;i--)
  printf("%c",p[i]);
} 	 
    