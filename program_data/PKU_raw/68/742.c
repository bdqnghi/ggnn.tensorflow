void main()
{
	int ss(long a);
	long n,j;
int i;
scanf("%d",&n);
for(i=6;i<=n;i+=2)
{
for (j=3;ss(j)!=1||ss(i-j)!=1;j+=2);
printf("%d=%d+%d\n",i,j,i-j);



}
}
int ss(long a)
{
int k,c=1;
for(k=3;k<=sqrt(a);k+=2)
{
	if(a%k==0){c=0;break;};

}
return (c);
}