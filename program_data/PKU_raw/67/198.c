int main(){
int a[10000][2];
int n;
int i;
int col;
double b[10000];
double x=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	for(col=0;col<2;col++){
	scanf("%d",&(a[i][col]));
b[i]=1.0*a[i][1]/a[i][0];
 }
}
for(i=1;i<n;i++){
x=b[i]-b[0];
if(x>0.05){
printf("better\n");}
else if(-x>0.05){
printf("worse\n");}
else if(x<0.05||-x<0.05){
printf("same\n");
 }
}
return 0;
}