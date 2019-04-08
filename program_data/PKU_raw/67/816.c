int main(){
int n;
scanf("%d",&n);
float x,y,a[2],b[2];
scanf("%f%f",&a[0],&a[1]);
x=a[1]/a[0];
int i;
for(i=0;i<n-1;i++){
scanf("%f%f",&b[0],&b[1]);
y=b[1]/b[0];
if(y-x>0.05)
printf("better\n");
else if(x-y>0.05)
printf("worse\n");
else
printf("same\n");
}
return 0;
}