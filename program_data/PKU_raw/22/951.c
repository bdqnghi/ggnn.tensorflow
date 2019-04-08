int main()
{   
	char s[1600]={0};
    gets(s);
	int i,p,j,n,q,a[301]={0};
	n=strlen(s);

     j=0;
	 for(i=0;i<n;i=i+1)
	 {
		 if (s[i]==',') j=j+1;
			 else a[j]=a[j]*10+s[i]-'0';
	 }
     if (j==0) 
		 printf("No");


	 else
	 {
		 for (q=0;q<j;q=q+1)
		 {
		 for(i=j;i>q;i=i-1)
			 if (a[i]>a[i-1])
			 {
				 p=a[i];
				 a[i]=a[i-1];
				 a[i-1]=p;
			 }
         }
		 p=0;
		 for(i=1;i<(j+1);i=i+1)
		 {
			 if (a[i]<a[0])
			 {
				 p=1;
				 break;
			 }
		 }
		 if (p) printf("%d",a[i]);
		   else printf("No");
	 }
	 
		


  return 0;
}
