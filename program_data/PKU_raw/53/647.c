void main()
{
 int n,*p,*q,a[300];
 scanf("%d",&n);
 for(p=a;p<=(a+n-1);p++)
	 scanf("%d",&*p);
 for(p=a;p<=(a+n-1);p++)
	 for(q=p+1;q<=(a+n-1);q++)
		 if(*q==*p)*q=0;
 printf("%d",*a);
 for(p=(a+1);p<=(a+n-1);p++)
	 if(*p!=0)printf(",%d",*p);
}