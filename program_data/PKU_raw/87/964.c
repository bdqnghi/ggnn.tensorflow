int main(){
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000];
	int i,sum;
	int result;
    for(i=0;i<1000;i++){
        scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	    result=3600*(d[i]-a[i]+12)+60*(e[i]-b[i])+(f[i]-c[i]);
		sum=a[i]+b[i]+c[i]+d[i]+e[i]+f[i];
		if(sum==0){
			break;
		}else{
			printf("%d\n",result);
		}
	}
	return 0;
}