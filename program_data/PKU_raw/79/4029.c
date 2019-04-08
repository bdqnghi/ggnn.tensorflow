int main()
{
   int a[300],b[300],n,i,num=0,*p,j,m,l;
   for(i=0;;i++)
   {
	   scanf("%d%d",&a[i],&b[i]);
       num=num+1;
	   if(a[i]==0&&b[i]==0)
		   break;
   }
   num=num-1;
   for(i=0;i<=num-1;i++)
   {
	   int c[300];
	   p=c;
	   for(j=0;j<a[i];j++)
		   *(p+j)=j+1;
	   j=0;m=0;l=0;
	   while(l<a[i]-1)
	   {
		   if(*(p+j)!=0)
			   m++;
		   if(m==b[i])
		   {
			   *(p+j)=0;
			   m=0;
			   l++;
		   }
		   j++;
		   if(j==a[i])
			   j=0;
	   }
	   while(*p==0)
		   p++;
	   printf("%d\n",*p);
   }
   return 0;
}