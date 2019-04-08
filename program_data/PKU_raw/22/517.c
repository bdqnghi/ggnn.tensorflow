void main()
{
   int a[300],i,j,t,n=1,m=0;
   char c;
   scanf("%d",&a[0]);
   for(i=1;;i++)
   {
	   scanf("%c",&c);
	   if(c=='\n')  break;
	   scanf("%d",&a[i]); n+=1;
   }
   if(n==1) printf("No\n");
   else
   {
	   for(i=0;i<n-1;i++)
   {
	   for(j=0;j<n-1-i;j++)
	   {
		   if(a[j]<a[j+1])
		   {t=a[j];a[j]=a[j+1];a[j+1]=t;}
	   }
   }
	   if(a[0]==a[n-1]) printf("No\n");
	   else
	   { for(i=1;;i++)
	   { if(a[i]!=a[0]) { printf("%d\n",a[i]);m++;}
	   if(m==1) break;
	   }
	   }  
   }
}