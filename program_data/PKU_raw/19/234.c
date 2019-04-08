void main()
{
  char str[100],*p,a[100],b[100],s[100][20];
  int l,i,j,d=1,k;
  gets(str);
  scanf("%s %s",a,b);
  l=strlen(str);
  p=str;
  for(i=0,j=0;;i++,j++)
  {
   if(str[i]==' ') break;
   else s[0][j]=str[i];
  }
  s[0][j]='\0';
  for(i=0;i<l;i++)
  {
   if(*(p+i-1)==' '&&*(p+i)!=' ')
   {
    for(j=0,k=i;;j++,k++)
    {
     if(str[k]==' ') break;
     else s[d][j]=*(p+k);
    }
    s[d][j]='\0';
    d=d+1;
   }
  }
  for(i=0;i<d;i++)
  {
   if(strcmp(s[i],a)==0)
   strcpy(s[i],b);
  }
  for(i=0;i<d-1;i++)
  printf("%s ",s[i]);
  printf("%s",s[d-1]);
}