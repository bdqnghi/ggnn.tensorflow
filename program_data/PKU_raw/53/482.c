void main()
{
int k=0,n=0,r=0,m=0;
int a[400];

scanf("%d",&r);

for(n=0;n<r;n++)
{
scanf("%d",&a[n]);
}

for(n=0;n<r;n++)
{
if(n!=777)
{
for(k=n+1;k<r;k++) {if(a[k]==a[n]) a[k]=777;}
}
}

printf("%d",a[0]);

for(n=1;n<r;n++)
{
	if (a[n]!=777) printf(",%d",a[n]);
}

}