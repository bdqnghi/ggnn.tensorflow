int main()
{
	int i=0,n;
int a[100],b[100],c[100],d[100],e[100],f[100];
int s[100];
while(1){
scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){break;}
i++;
}
n=i;
for(i=0;i<n;i++){
s[i]=(d[i]+12)*3600+e[i]*60+f[i]-a[i]*3600-b[i]*60-c[i];
}
for(i=0;i<n;i++){printf("%d\n",s[i]);}
return 0;
}