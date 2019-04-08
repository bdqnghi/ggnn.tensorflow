int main(){
   double n;
   char  a[500],b[500];
   scanf("%lf",&n);
   scanf("%s",a);
   scanf("%s",b);
   int len1=strlen(a),len2=strlen(b);
   int i,j=0;
   double t;
   for(i=0;i<len1;i++)
   {
	   if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')
	   {
		   printf("error");
		   goto  q;
	   }
   }
   for(i=0;i<len2;i++)
   {
	   if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
	   {
		   printf("error");
		   goto q;
	   }
   }
   if(len1!=len2)
   {
	   printf("error");
	   goto q;
   }
   if(len1==len2)
   {
   for(i=0;i<len1;i++)
   {
	   if(a[i]==b[i])
	   {
		   j++;
	   }
   }
   t=1.0*j/len1;
   if(t>n)
   {
	   printf("yes");
   }
   else{
	   printf("no");
   }
   }
   else
   {
	   printf("no");
   }
q:	return 0;
}