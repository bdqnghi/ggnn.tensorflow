int main()

{
  char a[100],b[100];
  int i,j,n,m,z;
   scanf("%s%s",a,b);
     n=strlen(a);
	 m=strlen(b);
	  for(i=0;i<n-1;i++)
		  for(j=0;j<n-1-i;j++)
		     if(a[j]<a[j+1])
		  {
		     z=a[j];
			 a[j]=a[j+1];
			 a[j+1]=z;
		  }

     for(i=0;i<m-1;i++)
		  for(j=0;j<m-1-i;j++)
		     if(b[j]<b[j+1])
		  {
		     z=b[j];
			 b[j]=b[j+1];
			 b[j+1]=z;
		  }
     if(strcmp(a,b)==0)
		 printf("YES");
	 else
		 printf("NO");

     return 0;
}//?????????????????????????