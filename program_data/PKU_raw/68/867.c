int prime(int m);
int main(void)
{
 int n,m,a,b,c,count=0;
 cin>>n;
 for(m=6;m<=n;m=m+2)
 {
	 for(a=2;a<=m/2;a++)
	 {
		 c=0;
		 b=m-a;
         if(prime(a)==1&&prime(b)==1)
		 {
			 printf("%d=%d+%d\n",m,a,b);
			 count++;
			 if(count%5==0)printf("\n");
			 c=1;
		 }
         if(c==1)break;
	 }
 }
 return 0;
}
int prime(int m)
{
 int n;
 for(n=2;n<=sqrt(m);n++)
 if(m%n==0)
 break;
 if(n>sqrt(m))
 return 1;
 else return 0;
}