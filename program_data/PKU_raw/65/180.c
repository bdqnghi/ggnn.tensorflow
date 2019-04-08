int main(){
int n,i,m,k;
int a[max],b[max];
scanf("%d",&n);
for(i=0,m=0,k=0;i<n;i++){
 scanf("%d %d",&a[i],&b[i]);
  if(a[i]-b[i]==1||a[i]-b[i]==-2){k++;}
  if(b[i]-a[i]==1||b[i]-a[i]==-2){m++;}
}
if(m>k){printf("A");}
if(m<k){printf("B");}
if(m==k){printf("Tie");}
}