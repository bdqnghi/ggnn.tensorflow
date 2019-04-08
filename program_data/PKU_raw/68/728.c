void main()
{ 
 long n,k,i,p;
 scanf("%ld",&n);
 int s[50001]={0};
 s[5]=1;s[3]=1;
 for (i=7;i<=n;)
 {p=0;
  for (k=3;k<=sqrt(i);k=k+2)
	  if (i%k==0) {p=1;break;}
  if (p==0) s[i]=1;
  i=i+2;
 }
 for (i=6;i<=n;)
 {k=3;
  while (k<=i/2)
   if (s[k]==1&&s[i-k]==1) {printf("%ld=%ld+%ld\n",i,k,i-k); break;} else k=k+2;
   i=i+2;
 }
}
