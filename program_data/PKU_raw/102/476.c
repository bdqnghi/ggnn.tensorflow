int main(){
int n,i,j,x=0,y=0,z;
char a[40][10];
double b[40],c[40],d[40],m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s %lf",&a[i],&b[i]);
for(i=0;i<n;i++){
z=strcmp(a[i],"female\0");
if(z==0){
c[x]=b[i];
x++;
}else{
d[y]=b[i];
y++;
}
}
for(i=y-1;i>0;i--){
for(j=0;j<i;j++){
if(d[j]>d[j+1]){
m=d[j+1];
d[j+1]=d[j];
d[j]=m;
}
}
}
for(i=x-1;i>0;i--){
for(j=0;j<i;j++){
if(c[j]>c[j+1]){
m=c[j+1];
c[j+1]=c[j];
c[j]=m;
}
}
}
for(i=0;i<y;i++)
printf("%.2lf ",d[i]);
for(i=x-1;i>0;i--)
printf("%.2lf ",c[i]);
printf("%.2lf",c[0]);
return 0;
}


