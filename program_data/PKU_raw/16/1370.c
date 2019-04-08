int main(int argc)
{   int i,n,c,b,a[10];
    cin>>n;   //??
	b=1;
	i=0;
	while(b!=0)
	{ a[i]=n%10;   //??????i+1??
	  b=n/10;         
	  n=b;
	  i++;}
	c=i;
	i=0;
	while (i<c)
	{cout<<a[i];i++;}   //?????
	return 0;
}