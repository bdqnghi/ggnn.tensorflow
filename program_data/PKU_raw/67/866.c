int main(){
int n;
scanf("%d",&n);
int i,j,l,m,a[99],z[99];
float q,w;
n=n-1;
scanf("%d%d",&l,&m);
q=1.0*m/l;
for(i=0;i<n;i++){
scanf("%d%d",&l,&m);
w=1.0*m/l;
if(w>=q+0.05){
printf("better\n");}
else if(w<=q-0.05){
printf("worse\n");}
else{
printf("same\n");}

}
return 0;} 

