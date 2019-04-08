int panduan(char str[])
{
 int n,i;
 n=strlen(str);
 if((str[0]!='_')&&((str[0]<65)||(str[0]>122)||((str[0]>90)&&(str[0]<97))))
  return 0;
 else
  for(i=0;i<n;i++)
  {
   if((str[i]!='_')&&((str[i]<48)||(str[i]>122)||((str[i]>90)&&(str[i]<97))||((str[i]>57)&&(str[i]<65))))
    return 0;
  }
  return 1;
}
int main()
{
 int n,i,a;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  char ch[100];
	scanf("%s",ch);
  a=panduan(ch);
  if(a)
   printf("yes\n");
  else
   printf("no\n");
 }
 return 0;
}



