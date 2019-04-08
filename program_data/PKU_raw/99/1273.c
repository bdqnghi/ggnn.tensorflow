int main(){
int n,i,j,a[10000];
double b[4]={0};
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if(a[i]<=18){
b[0]=b[0]+1;}
if(a[i]>18&&a[i]<=35){
b[1]=b[1]+1;}
if(a[i]>35&&a[i]<=60){
b[2]=b[2]+1;}
if(a[i]>60){
b[3]=b[3]+1;}
}
for(i=0;i<4;i++){
b[i]=(100.0*b[i])/n;
}
printf("1-18: %.2lf%%\n",b[0]);
printf("19-35: %.2lf%%\n",b[1]);
printf("36-60: %.2lf%%\n",b[2]);
printf("Over60: %.2lf%%\n",b[3]);
return 0;
}