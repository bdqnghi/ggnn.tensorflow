int main(){
    int a[50],b[50],c[50],d[50],e[50],f[50],start[50],end[50],total[50],i,j;
	for(i=0;i<50;i++){
	scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	}
	for(i=0;i<50;i++){
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			break;
		}
	}
	j=i;
    for(i=0;i<j;i++){
		start[i]=3600*a[i]+60*b[i]+c[i];
		end[i]=3600*(d[i]+12)+60*e[i]+f[i];
		total[i]=end[i]-start[i];
	}
    for(i=0;i<j;i++){
		printf("%d\n",total[i]);
	}
	return 0;
}
