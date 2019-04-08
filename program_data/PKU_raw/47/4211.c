int main(){
 int n,i,b;
 scanf("%d",&n);
 int a[n];
for(i=0;i<n;i++){scanf("%d",&a[i]);}

for(i=n-1;i>=0;i--){printf("%d",a[i]);
if(i!=0){printf(" ");}
}
 return 0;
}