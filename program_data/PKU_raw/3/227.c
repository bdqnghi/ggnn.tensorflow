int main()
{
int n,k;
int i,j,l;
int a,sum=0,f=0;
int m[1000];
scanf("%d""%d",&n,&k);
for(i=1;i<=n;i++){
	scanf("%d",&a);
    m[i]=a;
}
for(j=1;j<=n;j++){
	for(l=j;l<=n;l++){
		sum = m[j]+ m[l];
	if(sum == k) f=f+1;
	else f=f;
	}
}
if(f == 0) printf("no");
else printf("yes");
return 0;
}

