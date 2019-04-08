int main()
{
   int a[300],i,j,m,n,k;
   char c;
   for(i=0;;i++)
   {
	   scanf("%d",&a[i]);
       scanf("%c",&c);
	   if(c=='\n')break;
   }
   if(i==0)printf("No\n");
   else
   {
	   for(j=1;j<=i;j++)
	   {
		   m=a[0];
		   if(m>a[j]){m=m;n=a[j];break;}
		   if(m<a[j]){n=m;m=a[j];break;}
		   if(m=a[j]){n=-1;}
	   }
	   if(n==-1)printf("No\n");
	   else
	   {
		   for(k=j;k<=i;k++)
		   {
			   if(a[k]>m){n=m;m=a[k];}
		       else
		       if(a[k]==m){m=m;n=n;}
		       else
		       if(a[k]>n){m=m;n=a[k];}
		       else{m=m;n=n;}
		   }
	   printf("%d\n",n);
	   }
   }
   return 0;
}
