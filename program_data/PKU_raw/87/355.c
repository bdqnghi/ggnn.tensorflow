int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],i;
	int s1,s2,s;
	for(i=1;i<=100;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			break;
		}
	}
	for(i=1;i<=100;i++){
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			break;
		}
		s1=c[i]+60*b[i]+3600*a[i];
		s2=f[i]+60*e[i]+3600*(d[i]+12);
		s=s2-s1;
		printf("%d\n",s);
	}
	return 0;
}