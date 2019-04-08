void main()
{
   int a[100000],*p=a,n,k,*q;
   scanf("%d",&n);
   for(p=a;p<a+n;p++)
	   scanf("%d",p);
   scanf("%d",&k);
   for(p=a;p<a+n;p++)
	   if(*p==k)
	   {{for(q=p;q<a+n-1;q++)
	   *q=*(q+1);}
	   n--;
	   p--;}
   printf("%d",*a);
   for(p=a+1;p<a+n;p++)
	   printf(" %d",*p);




}