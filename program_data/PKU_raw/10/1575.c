int f(int s[],int n);
void main()
{
	int k,a[25],i,N;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	N=f(a,k);
	printf("%d",N);
}

int f(int s[],int n)
{
	int i,b[25],j;
	int flag=0,flag2=0;
	int *p=s;
	for(i=0;i<n-1;i++)
		if(s[i]<s[i+1]) {flag=1;break;}
	if(flag==0) return n;
	else
	{for(i=1;i<n;i++)
	{if(s[i]>s[0]){flag2=1;break;}}
    if(flag2==0) return f(p+1,n-1)+1;
else 
	{
		b[0]=s[0];
		for(i=1,j=1;i<n;i++)
			if(s[i]<=s[0]) {b[j]=s[i];j++;}
	
			return ((f(p+1,n-1))>f(b,j)?(f(p+1,n-1)):f(b,j));
	} }
}
