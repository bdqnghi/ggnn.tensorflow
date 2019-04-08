void main()
{
	int i,l,k,m=0;
	char *p1,*p2,*p3;
	char max;
	char str[11];
	char substr[4];
	char res[13];
	while(scanf("%s%s",str,substr)!=EOF)
	{
		p1=str;p2=substr;p3=res;
	   l=strlen(str);
	   max=str[0];
       k=0;
	   for(i=0;i<l;i++)
	   {
		   if(max<str[i]){max=str[i];k=i;}
	   }
	   for(i=0;i<13;i++)
	   {
		   if(i<=k)*(p3+i)=*(p1+i);
	       else if(i<=k+3)*(p3+i)=*(p2+i-k-1);
	       else if(i<l+3)*(p3+i)=*(p1+i-3);
	       else res[i]='\0';
	   }
	   printf("%s\n",res);
	   }
}
