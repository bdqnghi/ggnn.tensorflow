main()
{
   int n,a[100000],m,i,j,*p,s=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",a+i);
   scanf("%d",&m);
   for(i=0;i<n-s;i++)
   {   if(*(a+i)==m)
       {   for(j=i;j<n-s;j++)
	    *(a+j)=*(a+j+1);
	   s++;
	   i--;
       }
   }
   for(i=0;i<n-s-1;i++)printf("%d ",*(a+i));
   printf("%d",*(a+i));
}