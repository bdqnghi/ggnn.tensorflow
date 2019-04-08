int main()
{
	int n,a,b,c,i;
	scanf("%d\n",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	while(n-2)
	{scanf("%d",&c);
	if(b>a) {if(a>c) {i=b;b=a;a=i;}
	          else {if(b>c) {a=b;b=c;}
			       else a=c;} }
    else {if(b<c) {if(a<c) {b=a;a=c;}
	               else b=c;}}
         n=n-1;
	}
	printf("%d\n",a);
	printf("%d",b);
	return 0;
}
