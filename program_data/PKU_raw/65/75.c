int main()
{
int n,i,m=0,q=0;
int a[201],b[201];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d %d",&a[i],&b[i]);
for(i=0;i<n;i++)
{
	if(a[i]-b[i]==-1||a[i]-b[i]==2)
	m++;
	else if(a[i]==b[i])
    m=m+1-1;
	else if(a[i]-b[i]==1||a[i]-b[i]==-2)
	q++;		
}
if(m==q)
printf("Tie");
else if(m>q)
printf("A");
else if(m<q)
printf("B");
return 0;
}