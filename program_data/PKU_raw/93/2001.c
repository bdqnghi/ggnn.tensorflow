void main()
{
 int n,i,f=0;
 scanf("%d",&n);
 for (i=3;i<=7;i=i+2)
   if (n%i==0)
	 {
	 f=1;
	 printf("%d",i);
	 break;
	 }
 for (i=i+2;i<=7;i=i+2)
   if (n%i==0)
	 {
	 f=1;
	 printf(" %d",i);
	 }
 if (f==0)
   printf("n");
 printf("\n");
}