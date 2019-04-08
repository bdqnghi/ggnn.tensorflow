int l1,l2,a1[50],a2[50],a3[100];
void f1(int a1[],int a2[])
{
	scanf("%d %d",&l1,&l2);
	int i;
	for(i=1;i<=l1;i++) scanf("%d",&a1[i]);
	for(i=1;i<=l2;i++) scanf("%d",&a2[i]);
}
void f2(int l,int a[])
{
	int i,j,t;
	for(i=1;i<l;i++)
	{
		for(j=1;j<=l-i;j++) { if(a[j]>a[j+1]) {t=a[j]; a[j]=a[j+1]; a[j+1]=t;} }
	}
}
void f3(int a1[],int a2[],int a3[])
{
	int i;
	for(i=1;i<=l1;i++) a3[i]=a1[i];
	for(i=l1+1;i<=l1+l2;i++) a3[i]=a2[i-l1];
}
void f4(int a3[])
{
	int i;
	for(i=1;i<=l1+l2;i++) {if(i!=1) printf(" ");printf("%d",a3[i]);}
}
main()
{
	f1(a1,a2);
	f2(l1,a1);
	f2(l2,a2);
	f3(a1,a2,a3);
	f4(a3);
}