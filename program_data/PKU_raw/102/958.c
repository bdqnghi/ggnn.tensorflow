int main(){
double h,p,b[40],c[40];
	int n,i,t,j=1,k=1;
	char a[10],d[5]={"male"},e[7]={"female"};
scanf("%d",&n);
for (i=1;i<=n;i++){
scanf("\n%s",a);
scanf("%lf",&h);
if (strcmp(a,d)==0) {
b[j]=h;
j+=1;
continue;
}
if (strcmp(a,e)==0){
c[k]=h;
k=k+1;
}
}
j=j-1;
k=k-1;
for (i=1;i<=j;i++)
for (t=i;t<=j;t++)
if (b[i]>b[t]) {
p=b[i];
b[i]=b[t];
b[t]=p;
}
for (i=1;i<=k;i++)
for (t=i;t<=k;t++)
if (c[i]<c[t]) {
p=c[i];
c[i]=c[t];
c[t]=p;
}
for (i=1;i<=j;i++)
printf("%.2lf ",b[i]);
for (i=1;i<k;i++)
printf("%.2lf ",c[i]);
printf("%.2lf",c[k]);

return 0;
}
