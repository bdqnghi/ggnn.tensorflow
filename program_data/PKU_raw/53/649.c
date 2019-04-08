void main()
{
 int n,s,i,*p,*q,a[300];
 scanf("%d",&n);
 for(p=a;p<=(a+n-1);p++)
	 scanf("%d",&*p);
 printf("%d",*a);
 for(p=a+1,i=1;p<=(a+n-1);i++,p++)
 {
	 for(q=a,s=0;q<=p-1;q++)
	 {
		 if(*q!=*p)s++;
		 else break;
	 }
	 if(s==i)printf(",%d",*p);
 }

}