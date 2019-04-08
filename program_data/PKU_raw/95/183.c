int main()
{
     char str1[100],str2[100];
	 int i,j,k,n;
	 k=0;
	 gets(str1);
	 gets(str2);
	 n=strlen(str1);
	 if (strlen(str2)<n) n=strlen(str2);
     for (i=0;i<=n;i++)
	 {
	      if (k==0)
		  {
		      if (str1[i]>90) str1[i]=str1[i]-32;
              if (str2[i]>90) str2[i]=str2[i]-32;
			  if (str1[i]>str2[i]) k=1;
			  if (str1[i]<str2[i]) k=-1;
		  }
	 }
	 if (k>0) printf(">\n");
	 if (k<0) printf("<\n");
	 if (k==0) printf ("=");
}