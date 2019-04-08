int main(){
	int i,j,a[100],b[100],c[100],d[100],e[100],f[100],s[100];
	for(i=1;i;i++){
		scanf("%d",&a[i]);
		if(a[i]!=0)
		scanf(" %d %d %d %d %d",&b[i],&c[i],&d[i],&e[i],&f[i]);
		else{
		scanf(" %d %d %d %d %d",&b[i],&c[i],&d[i],&e[i],&f[i]);
		break;
		}
	}
	for(j=1;j<i;j++){
	s[j]=3600*(11+d[j]-a[j])+60*(59+e[j]-b[j])+60+f[j]-c[j];
	printf("%d\n",s[j]);
	}
	return 0;
}