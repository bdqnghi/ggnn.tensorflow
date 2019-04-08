int main(){
int n;
int p[10][3],b[100],e[100];
int i,j,l;
int x;
double y;
double d[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d %d ",&p[i][0],&p[i][1],&p[i][2]);
}
l=0;
while(l<n*(n-1)/2){
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
d[l]=sqrt(1.0*((p[i][0]-p[j][0])*(p[i][0]-p[j][0])+(p[i][1]-p[j][1])*(p[i][1]-p[j][1])+(p[i][2]-p[j][2])*(p[i][2]-p[j][2])));
    b[l]=i;
e[l]=j;
l++;
}
}

}
for(i=0;i<n*(n-1)/2-1;i++){
for(l=0;l<n*(n-1)/2-i;l++){
if(d[l]<d[l+1]){
y=d[l];
d[l]=d[l+1];
d[l+1]=y;
x=b[l];
b[l]=b[l+1];
b[l+1]=x;
x=e[l];
e[l]=e[l+1];
e[l+1]=x;
}
}
}
for(l=0;l<n*(n-1)/2;l++){
i=b[l];
j=e[l];
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",p[(i)][0],(p[(i)][1]),(p[(i)][2]),(p[(j)][0]),(p[(j)][1]),(p[(j)][2]),d[l]);
}


return 0;
}