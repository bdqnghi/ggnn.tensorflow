int main(){
int n,i,j=0,k=0;
int a[200],b[200];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if(a[i]==b[i]){
j=j;
k=k;
}
else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
j++;
}
else 
k++;
}
if(j==k){
printf("Tie");
}else if(j>k){
printf("A");
}else printf("B");
return 0;
}
