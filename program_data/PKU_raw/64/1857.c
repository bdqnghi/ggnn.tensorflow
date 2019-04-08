
int main(){
int n,x[10],y[10],z[10],xx1[50],yy1[50],zz1[50],xx2[50],yy2[50],zz2[50],i,t,k=0,e;
double j[10][10],jj[50],f;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d%d",&x[i],&y[i],&z[i]);
}
for(i=0;i<n;i++){
for(t=0;t<n;t++){
j[i][t]=sqrt((x[i]-x[t])*(x[i]-x[t])+(y[i]-y[t])*(y[i]-y[t])+(z[i]-z[t])*(z[i]-z[t]));
}
}
for(i=0;i<n;i++){
for(t=i+1;t<n;t++){
jj[k]=j[i][t];
xx1[k]=x[i];
xx2[k]=x[t];
yy1[k]=y[i];
yy2[k]=y[t];
zz1[k]=z[i];
zz2[k]=z[t];
k++;
}
}
for(i=1;i<=k+1;i++){
for(t=0;t<k-1;t++){
if(jj[t]<jj[t+1]){
f=jj[t+1];
jj[t+1]=jj[t];
jj[t]=f;
e=xx1[t+1];
xx1[t+1]=xx1[t];
xx1[t]=e;
e=yy1[t+1];
yy1[t+1]=yy1[t];
yy1[t]=e;
e=zz1[t+1];
zz1[t+1]=zz1[t];
zz1[t]=e;
e=xx2[t+1];
xx2[t+1]=xx2[t];
xx2[t]=e;
e=yy2[t+1];
yy2[t+1]=yy2[t];
yy2[t]=e;
e=zz2[t+1];
zz2[t+1]=zz2[t];
zz2[t]=e;
}
}
}
for(i=0;i<k;i++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",xx1[i],yy1[i],zz1[i],xx2[i],yy2[i],zz2[i],jj[i]);
}
return 0;
} 