int main(){
int A[200],b=0,a=0,B[200],c=0;
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&A[i],&B[i]);
if(A[i]-B[i]==0){
c++;
}else if(A[i]-B[i]==1){
b++;
}else if(A[i]-B[i]==-1){
a++;
}else if(A[i]-B[i]==2){
a++;
}else if(A[i]-B[i]==-2){
b++;
}
}
if(a>b){
printf("A");
}else if(a==b){
printf("Tie");
}else if(a<b){
printf("B");
}
return 0;
}