int main(){
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],sum[1000],i,x,y,m=0;
	
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0) break;
	    else m++;
        x=a[i]*60*60+b[i]*60+c[i];
	    y=d[i]*60*60+e[i]*60+f[i]+12*60*60;
	    sum[i]=y-x;
	}
	for(i=0;i<m;i++){
		printf("%d\n",sum[i]);
	}

	return 0;
}