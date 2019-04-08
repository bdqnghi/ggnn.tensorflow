int main(){
int n,k,i,j,p,q,min,max;
scanf("%d",&n);
int sz[10000],a[100],b[100];
for(i=0;i<=10000;i++){sz[i]=0;}
for(i=0;i<n;i++){scanf("%d %d",&(a[i]),&(b[i]));
for(k=2*a[i];k<=2*b[i];k++){sz[k]=1;}
}
for(i=1;i<=n;i++){
for(j=0;j<n-1;j++){if(a[j+1]<a[j]){p=a[j+1];a[j+1]=a[j];a[j]=p;}}}
min=a[0];
for(i=1;i<=n;i++){
for(j=0;j<n-1;j++){if(b[j+1]>b[j]){q=b[j+1];b[j+1]=b[j];b[j]=q;}}}
max=b[0];
for(i=2*a[0];i<=2*b[0];i++){if(sz[i]!=1){printf("no");return 0;}}
printf("%d %d",min,max);
return 0;}
