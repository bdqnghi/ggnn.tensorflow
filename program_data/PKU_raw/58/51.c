void main()
{
 int n,i,j;
 char b[10];
 scanf("%d",&n);
 gets(b);
 char **p;
 p=(char **)malloc(n*sizeof(char));
 for(i=0;i<n;i++)
 {
  p[i]=(char *)malloc(80*sizeof(char));
  gets(p[i]);
  j=1;
  if(*p[i]=='_'||(*p[i]>='a'&&*p[i]<='z')||(*p[i]>='A'&&*p[i]<='Z'))
  {
   while(*(p[i]+j)!='\0')
   {
    if(*(p[i]+j)=='_'||(*(p[i]+j)>='0'&&*(p[i]+j)<='9')||(*(p[i]+j)>='a'&&*(p[i]+j)<='z')||(*(p[i]+j)>='A'&&*(p[i]+j)<='Z')) j++;
	else break;
   }
    if(*(p[i]+j)=='\0') printf("1\n");
	else printf("0\n");
  }
  else printf("0\n");
 }
}