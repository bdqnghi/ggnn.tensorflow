int main()
{
   int len1,len2,i,j=0,flag=0;
   double rate;
   char a[500],b[500];
   scanf("%lf%s%s",&rate,a,b);
   len1=strlen(a);
   len2=strlen(b);
   if(len1!=len2)
   {
	   printf("error\n");
	   return 0;
   }
   for(i=0;i<len1;i++)
   {
	   if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G') 
	   {
		   printf("error\n");
		   flag=1;
		   break;
	   }
	   if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G') 
	   {
		   printf("error\n");
		   flag=1;
		   break;
	   }
       if(a[i]==b[i]) j++;
   }
   if(flag==1) return 0;
   if((double)j/len1>rate) printf("yes\n");
   else printf("no\n");
   return 0;
}



