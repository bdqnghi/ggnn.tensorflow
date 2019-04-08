int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],s=0,i,k;
	for(i=0;i<1000;i++){
	scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		k=i;
		break;
	}
	}
	for(i=0;i<k;i++){
		s=0;
		s=s+12*60*60-60*60*a[i]-60*b[i]-c[i]+60*60*d[i]+60*e[i]+f[i];
        printf("%d\n",s);
	}


	return 0;
}