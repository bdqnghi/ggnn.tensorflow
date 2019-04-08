int main(){
int z[100],i,a[100],b[100],c[100],d[100],e[100],f[100],k=0;
int s1,s2;
for(i=0;i<100;i++){
	scanf("%d %d %d %d %d %d\n",&(a[i]),&(b[i]),&(c[i]),&(d[i]),&(e[i]),&(f[i]));
	k++;
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		break;
		k--;
	}
}
for(i=0;i<k;i++){
	s1=(12*1.0+d[i])*3600+e[i]*60+f[i];
	s2=a[i]*3600+b[i]*60+c[i];
	z[i]=s1-s2;
}
printf("%d",z[0]);
for(i=1;i<k-1;i++){
	printf("\n%d",z[i]);
}
	return 0;
} 