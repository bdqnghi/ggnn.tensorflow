void main()
{
     int n,i,j,l[20],s[20];
	 char a[20][100],b[20][100],c[20][100];
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		 scanf("%s%s",a[i],b[i]);
		 l[i]=strlen(a[i]);
         s[i]=strlen(b[i]);
	 }
     for(i=0;i<n;i++)
	 {
         for(j=l[i]-1;j>=0;j--)
		 {
			     if(s[i]>0)
				 {
				     if(a[i][j]>=b[i][s[i]-1])
					 {				     
						  c[i][j]=a[i][j]-b[i][s[i]-1]+48;
			              s[i]=s[i]-1;
					 }
				     else
					 {
                          c[i][j]=10+a[i][j]-b[i][s[i]-1]+48;
						  a[i][j-1]=a[i][j-1]-1;
						  s[i]=s[i]-1;
					 }
				 }
			     else
				 {
				 c[i][j]=a[i][j];
				 }
			

		 }
	 }
	 
	 for(i=0;i<n;i++)
	 {
		 for(j=0;j<l[i];j++)
		 {
			 printf("%c",c[i][j]);
		 }
		 printf("\n");
	 }
}
