void main()
{
 char c[300];
 gets(c);
 int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},s=0,i=0,j=0;
 char d='A',e='a';
 while(i<26)
 {
  while(c[j]!='\0')
  {
   if(c[j]==d)
    a[i]++;
   j++;
  }
  j=0;
  if(a[i]!=0)
   printf("%c=%d\n",d,a[i]);
  i++;
  d++;
 }
 i=0;
 while(i<26)
 {
  while(c[j]!='\0')
  {
   if(c[j]==e)
    b[i]++;
   j++;
  }
  j=0;
  if(b[i]!=0)
   printf("%c=%d\n",e,b[i]);
  i++;
  e++;
 }
 i=0;
 while(i<26)
 {
  s=s+a[i]+b[i];
  i++;
 }
 if(s==0)
  printf("No");
}