int main()
{
int n,a[200000],i,j,b,c[101];
scanf("%d",&n);
for(i=0;i<101;i++){
	c[i]=0;
}

for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	c[a[i]]++;
	if(c[a[i]]==1){
		if(i==0)printf("%d",a[0]);
		else printf(" %d",a[i]);
	}
}

return 0;
}
