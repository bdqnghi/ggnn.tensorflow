int reverse(int n)
{
	int rev;

    if(n==0)
		rev=0;
	if(n<0)
	{
		n=(-1)*n;
		rev=reverse(n)*(-1);
	}
	else
	{
		for(rev=0;n!=0;)
		{
            rev=n%10+10*rev;
			n/=10;
		}
	}
	return rev;
}
int main()
{
	int n[6],i;
	for(i=0;i<6;i++)
	    scanf("%d",&n[i]);
	for(i=0;i<6;i++)
	    printf("%d\n",reverse(n[i]));
	return 0;
}