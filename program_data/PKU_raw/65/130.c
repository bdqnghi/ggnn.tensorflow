int main(){
int n,A=0;
scanf("%d",&n);
int a[n],b[n];
for(int i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){A++;}
else if(a[i]!=b[i]){A--;}
}
if(A>0){printf("A");}
if(A<0){printf("B");}
if(A==0){printf("Tie");}
return 0;
}