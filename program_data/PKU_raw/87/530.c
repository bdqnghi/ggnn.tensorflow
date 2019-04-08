int main(){
int i,t,a[100],b[100],c[100],d[100],e[100],f[100],sum[100];

for(i=0;i<100;i++){
scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
	t=i;
	break;
}
}


for(i=0;i<t;i++){
			sum[i]=(12-a[i])*3600-b[i]*60-c[i]+3600*d[i]+60*e[i]+f[i];
	
}
for(i=0;i<t;i++){
	printf("%d\n",sum[i]);
}
	return 0;
}
