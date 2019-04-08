int main(){
	int i,a[100],b[100],c[100],d[100],e[100],f[100],time[100];
    for(i=0;i<100;i++){
		time[i]=0;
	scanf("%d%d%d%d%d%d\n",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);	
	if(a[i]==0 && b[i]==0 && c[i]==0 && d[i]==0 && e[i]==0 && f[i]==0)
		break;
	time[i]=(d[i]+12-a[i])*3600+(e[i]-b[i])*60+f[i]-c[i];
	printf("%d\n",time[i]);}
	return 0;
}

