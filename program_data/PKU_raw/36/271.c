void main()
{
     char a[20],b[20],m,n;int i,j,t;t=1;
	 scanf("%s %s",a,b);
	 for(i=0;i<strlen(a);i++)
	 {
		 for(j=0;j<strlen(a)-i;j++)
		 {
			 if(a[j]>a[j+1]) 
			 {m=a[j];
			 a[j]=a[j+1];
			 a[j+1]=m;}
		 }
	 }
     for(i=0;i<strlen(b);i++)
	 {
		 for(j=0;j<strlen(b)-i;j++)
		 {
			 if(b[j]>b[j+1]) 
			 { n=b[j];
			 b[j]=b[j+1];
			 b[j+1]=n;}
		 }
	 }
	 for(i=0;i<strlen(a);i++)
	 {
		 if(a[i]!=b[i]) 
         {t=0;break;}
		 else continue;
	 }
	 if(t==0)printf("NO");
	 if(t==1)printf("YES");
}

