void main()
{
	int i,j,k,p;
 char s[100],c[100],a[100];
 gets(s);
 gets(c);
 gets(a);
 k=strlen(s);
 p=strlen(c);
 for(i=0;i<k;i++)
 {
	 j=0;
	 for(j=0;j<p;j++,i++)
	 {
		 if(s[i]!=c[j])
		 break;
	 }
	 if(j>p-1)
	 {
	  for(j=0;j<p;j++,i++)
      s[i-p]=a[j];
	  break;
	 }
 }
	 for(i=0;i<k;i++)
		 printf("%c",s[i]);
}
