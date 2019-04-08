int main()
{
     int n,i,a[300],*p,*q;

	 scanf("%d",&n);
	 for(i=0;i<n;i++)
		 scanf("%d",&a[i]);
	 p=a;
	 printf("%d",*p);
	 for(p=a+1;p<a+n;p++)
	 {
		 for(q=p-1;q>=a;q--)
		 {
			 if(*p==*q)break;
		 }
		 if(q<a)
			 printf(",%d",*p);
	 }
	 return 0;
}

