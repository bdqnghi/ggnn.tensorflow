int main(){
int a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],i,n,t[100],k;
scanf("%d %d %d %d %d %d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);
i=0;
n=1;
while(i>=0){
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){k=0;}else{k=1;}

	if(k==1){	i++;
scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
n++;}
	if(k==0){break;}
}
for(i=0;i<n-1;i++){
g[i]=3600*a[i]+60*b[i]+c[i];
h[i]=3600*d[i]+60*e[i]+f[i];
t[i]=h[i]-g[i];
t[i]=t[i]+43200;
printf("%d\n",t[i]);
}



return 0;
}