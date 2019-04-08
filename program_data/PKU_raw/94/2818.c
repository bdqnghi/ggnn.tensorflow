int main(){
int i,j, k,l,e,x[1000],y[1000];
int N;
i=0;
j=0;
scanf("%d",&N);
for(i = 0; i < N; i++){
 scanf("%d ", &x[i]);
}
for(i=0;i<N;i++){
if(x[i]%2==1){
y[j]=x[i];
j=j+1;
}
}
k=j;
j=0;
l=1;
for(l=1;l<=k;l++){
for(j=0;j<k-l;j++){
if(y[j]>y[j+1]){
e=y[j+1];
y[j+1]=y[j];
y[j]=e;
}
}
}
for(j=0;j<k-1;j++){
printf("%d,",y[j]);
}
printf("%d",y[k-1]);
return 0;
}

