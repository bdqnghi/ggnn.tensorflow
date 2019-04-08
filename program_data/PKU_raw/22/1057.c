main()
{
int lim=0,i,j,a[301]={0},d=0;
a[0]=0;
char ch;
do{
	lim=lim+1;
	scanf("%d",&a[lim]);
	ch=getchar();
}while(ch!='\n');

for (i=1;i<lim;i++)
	{
	for (j=lim;j>i;j--)
		{
	if (a[j]>a[j-1]) {a[j]=a[j]+a[j-1];a[j-1]=a[j]-a[j-1];a[j]=a[j]-a[j-1];}
		}
	}
if (lim==1) printf ("No");
else
{
for (i=2;i<=lim;i++)
{
if (a[i]!=a[1]) {printf ("%d",a[i]);goto cobra_loop;}
}
printf ("No");
cobra_loop:
return 0;
}
}