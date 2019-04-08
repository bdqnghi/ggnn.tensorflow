
main()
{
int n,i,c,a;
long T;
scanf("%d",&n);
T=0;

for(i=1;i<=n;i++)
{	 if (i>70) a=i-70;
		else a=70-i;
	c=i-7;
if (i%7!=0&&c%10!=0&&i/10!=7) T=T+i*i;

}
printf("%d\n",T);

return 0;
}