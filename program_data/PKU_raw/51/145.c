main()
{
   int n;
   char c[500];
   scanf("%d",&n);
   scanf("%s",c);
   int m[300];
   int i,j,k;
   for(i=0;i<300;i++)
	   m[i]=0;
   int t,p,q;
   char s[300][5]={{0}};
   t=0;
   for(i=0;i<strlen(c)-1;i++)
   {
	   for(j=0;j<n;j++)
		   s[t][j]=c[i+j];
       t++;
   }
   for(i=0;i<t;i++)
   {
        for(j=i+1;j<t;j++)
		{
		    if(strcmp(s[i],s[j])==0)
				m[i]++;
		}
   }
   k=0;
   for(i=0;i<t;i++)
	   if(m[i]>k)
		   k=m[i];
   if(k>0)
   {
	   printf("%d\n",k+1);
       for(i=0;i<t;i++)
	   {
           if(m[i]==k)
		       printf("%s\n",s[i]);
	   }
   }
   else
	   printf("NO");


}