int main(){
char sex[8];
int n,i,m1,m2,j;
double a[41],b[41],t;
scanf("%d",&n);
m1=0;
m2=0;
for (i=1;i<=n;i++){
scanf("%s%lf",sex,&t);
if (sex[0]=='m') {m1=m1+1;a[m1]=t;}
if (sex[0]=='f') {m2=m2+1;b[m2]=t;}
}
for (i=1;i<=m1;i++)
for (j=1;j<=m1-i;j++)
if (a[j]>a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
for (i=1;i<=m1;i++) printf("%.2lf ",a[i]);
for (i=1;i<=m2;i++)
for (j=1;j<=m2-i;j++)
if (b[j]>b[j+1]){
t=b[j];
b[j]=b[j+1];
b[j+1]=t;
}
for (i=m2;i>=2;i--) printf("%.2lf ",b[i]);
printf("%.2lf",b[1]);
return 0;
}
