int main(){
int a[100],b[100],c[100],d[100],e[100],f[100],h[100],m[100],s[100],t[100];
int i,k;
i=0;
for(i=0;i<100;i++){
scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
	k=i;
	break;}
}
for(i=0;i<k;i++){
h[i]=d[i]+12-(a[i]+1);
m[i]=59-b[i]+e[i];
s[i]=60-c[i]+f[i];
t[i]=60*60*h[i]+m[i]*60+s[i];
printf("%d\n",t[i]);
}
return 0;
}	
