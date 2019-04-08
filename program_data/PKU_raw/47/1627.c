int main(){
int n,k;
int i;
int sz[100];
scanf("%d",&n);
i=0;
k=n-1;
while(i<n){
scanf("%d",&sz[i]);
i++;
}
while(k>=0){
    if(k!=0){
    printf("%d ",sz[k]);}
    else{printf("%d",sz[k]);}
    k--;
}
return 0;
}
