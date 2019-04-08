int main(){
	int i;
	int a[50],b[50],c[50],d[50],e[50],f[50];
	int t;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&e[i]==0&&d[i]==0&&f[i]==0){
			break;
		}
	}
	for(i=0;;i++){
        if(a[i]==0&&b[i]==0&&c[i]==0&&e[i]==0&&f[i]==0){
			break;
		}

		t=((d[i]+12)*3600+e[i]*60+f[i])-(a[i]*3600+b[i]*60+c[i]);

        printf("%d\n",t);

	}
	return 0;
}


