int main(){
int q[50000],z[50000],i,n,k,e,zm[50000],max=0;
scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%d%d\n",&q[i],&z[i]);
}
for(k=1;k<=n;k++){
  for(i=0;i<n-k;i++){
    if(q[i]>q[i+1]){
      e=q[i];
      q[i]=q[i+1];
      q[i+1]=e;
      e=z[i];
      z[i]=z[i+1];
      z[i+1]=e;
    }
  }
}

int l=n-1;
for(i=1;i<=n;i++){
  for(k=0;k<=n-i;k++){
    if(z[k]>z[max]){
      max=k;
    }
  }
  zm[l]=z[max];
  l--;
  max=0;
}
int p=0;
for(i=0;i<n-1;i++){
  if(q[i+1]<=zm[i]){
    p++;
  }
}
if(p!=n-1){
  printf("no");
}
if(p==n-1){
  printf("%d %d",q[0],zm[n-1]);
}
return 0;
}
