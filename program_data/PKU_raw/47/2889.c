int main()
{
   int n,i;
   int a[300],b[300];
   int *p,*p1;
   p=a;
   p1=b;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {  scanf("%d",p);
      *p1=*p;
	  p1++;
      p++;
   }
   p=a;
   p1=b;
   i=0;
   for(i=0;i<n;i++,p++)
   { *p=*(p1+n-1-i);
   }
  p=a;
   printf("%d",*p);
   for(i=1;i<n;i++)
	   printf(" %d",*(++p));

	return 0;
}