int main()
{
 int b,c,i;
 char a[100];
 scanf("%s",a);
 b=a[0]-'0';
 if(a[1]=='\0'||(a[2]=='\0'&&(a[2]-'0')<3&&(a[0]-'0')==1))
 {
   printf("0");
 }
 for(i=1;a[i]!='\0';i++)
 {
  b=b*10+(a[i]-'0');
  c=b/13;
  b=b%13;
  if(i==1&&c==0)
  {
      continue;
  }
  printf("%d",c);
 }
  printf("\n%d",b);
 return 0;
}