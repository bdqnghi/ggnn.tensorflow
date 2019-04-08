int main()
{
int a[100],b[100],c[100],d[100],e[100],f[100],s,i,n;
for(i=0;i>-1;i++){
	scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		n=i;
		break;
	}
}
for(i=0;i<n;i++){
	s=0;
	d[i]=d[i]+12;
	s=((d[i]-a[i])*3600)-(b[i]*60)-c[i]+(e[i]*60)+f[i];
	printf("%d\n",s);
}
return 0;
}