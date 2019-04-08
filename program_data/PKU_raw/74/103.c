void main()
{	int hui(int n);
	int su(int n);
	int m,n,i,j=0,a[50];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++) if((su(i))&&(hui(i))){a[j]=i;j++;}
	if(j==0) printf("no");
	else for(i=0;i<j;i++) {printf("%d",a[i]);if(i<j-1) putchar(',');}
}
int su(int n)
{	int i;
	for(i=2;i<n;i++) if(n%i==0) {return 0;break;}
	return 1;
}
int hui(int n)
{	int change(int n);
	int m;
	m=change(n);
	if(n==m) return 1;
	else return 0;
}
int change(int n)
{	int i,j,a,b;
	for(i=1;;i*=10) if(n/i<10) break;
	if(i<10) return n;
	else
	{	a=n/i;
		n=n%i;
		for(j=1;;j*=10) if(n/j<10) break;
		b=a+i/j*change(n);
	}
	return b;
}
