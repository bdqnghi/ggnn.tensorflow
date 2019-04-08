void main()
{
 char str[100000];
 int i,j=0,a[300],m=0,n=1;
 for(i=0;i<=100000;i++)
 if(str[i]!='\0')n++;
 
 gets(str);

  for(i=0;i<n;i++)
 	 
	 
	 if(str[i]==' '||str[i]=='\0') 
	 {
		 a[j]=m;
	 j++;
	 m=0;
	 }
	 else m++;

 printf("%d",a[0]);
  for(i=1;i<j;i++)
	if(a[i]!=0)   printf(",%d",a[i]);
}