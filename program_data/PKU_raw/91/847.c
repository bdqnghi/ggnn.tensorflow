
void main()
{
	int n,i,a,b;
   char s[100];
   char s2[100]={'\0'};
   char *p,*q;
   p=s;
   q=s2;
   gets(s);
   n=strlen(s);
   for(i=0;i<n-1;i++)
   {
	   a=(*(p+i))+(*(p+i+1));
	  (*(q+i))=a;
   }
   b=(*(p+n-1))+(*(p+0));
   (*(q+n-1))=b;
   for(i=0;i<n;i++)
   {
	   printf("%c",*(q+i));
   }
}

