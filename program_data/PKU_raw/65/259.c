int main(){
int n,sz[2],a=0,b=0,i;
scanf("%d\n",&n);
for(i=0;i<n;i++){
scanf("%d %d",&(sz[0]),&(sz[1]));
if((sz[0]==0&&sz[1]==1)||(sz[0]==1&&sz[1]==2)||(sz[0]==2&&sz[1]==0)){
a++;
}
else if((sz[0]==1&&sz[1]==0)||(sz[0]==2&&sz[1]==1)||(sz[0]==0&&sz[1]==2)){
b++;
}
}
if(a>b){
printf("A");
}
else if(a<b){
printf("B");
}
else{
printf("Tie");
}
return 0;
}
