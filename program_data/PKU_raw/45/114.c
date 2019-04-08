int  main()
{
   char a[60];
   char b[60];
   cin>>a>>b;
   int l1,l2;
   l1=strlen(a);
   l2=strlen(b);
   int i;
   for(i=0;i<=l2-l1;i++)
   {
	   int c=0,j,k;
	   for(j=i,k=0;j<=i+l1-1;j++,k++)
	   {
		   if(b[j]==a[k])
			   c++;
		   
	   }

	   if(c==l1){
		   cout<<i;break;}
   }
   return 0;
}
