void main()
{
 int l,i;
 char a[100];
 char *p;
 p=a;
 gets(a);
 l=strlen(p);
 for(i=0;i<l-1;i++)
 {
   printf("%c",*(p+i)+*(p+i+1));
  }
 printf("%c",*p+*(p+l-1));
}