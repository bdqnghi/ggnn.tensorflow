int main(){
int i,n,x,y,w;
int a,b;
a=0;b=0;

scanf("%d",&n);

for(i=1;i<=n;i++){
    scanf("%d %d",&x,&y);
    w=y-x;
    if(w==1){
    a++;}else 
    if(w==2){
    b++;}else
    if(w==-1){
    b++;}else
    if(w==-2){
    a++;}
}
if(a>b){
printf("A");
}else 
if(a<b){
printf("B");
}else {
printf("Tie");
}

return 0;
}
