 int main()
 {
 char a[500];
 int m,i,q,k,p,n;
 for (i=0;i<500;i++)
 {
	 scanf("%c",&a[i]);
	 if (a[i]=='\n')
		 break;
 }
 n=i;
 for (m=2;m<=n;m++)
 {
	 for(i=0;i<n-m+1;i++)
	 {
		 for (q=0;q<m-1;q++)
		 {
			 if(a[i+q]!=a[i+m-1-q])
				 p=p+1;
		 }
		 if(p==0)
		 { for (k=i;k<i+m;k++)
			 {
				 printf("%c",a[k]);
			 }
		 printf("\n");
		 }
		 p=0;
	 }
 }
 return 0;
 }
