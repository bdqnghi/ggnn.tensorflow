int main() {
int n,i;
int c=0;
int d=0;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if(a[i]==0){
if(b[i]==1) c++;
if(b[i]==2) d++;
}
if(a[i]==1){
if(b[i]==2) c++;
if(b[i]==0) d++;
}
if(a[i]==2){
if(b[i]==0) c++;
if(b[i]==1) d++;
}
}
if(c>d) printf("A");
if(c<d) printf("B");
if(c==d) printf("Tie");
return 0;
}
