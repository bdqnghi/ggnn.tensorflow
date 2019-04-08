int main(){
    int i,q=0;
	int a[100],b[100],c[100],d[100],e[100],f[100],s[100];
	for(i=0;;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			break;
		}
        q++;
	    s[i]=(60-c[i])+(60-b[i]-1)*60+(12-a[i]-1)*3600+d[i]*3600+e[i]*60+f[i];
	}
	for(i=0;i<q;i++){
     printf("%d\n",s[i]);   
	}
	return 0;
}
