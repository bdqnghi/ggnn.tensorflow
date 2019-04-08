int main(){
int n,i,j,k,max,min,z,t;
double d;
z=0;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
    scanf("%d%d",&a[i],&b[i]);
    }
min=a[0];
max=b[0];
for(i=1;i<n;i++){
    if(a[i]<min){min=a[i];}
    if(max<b[i]){max=b[i];}
}
int sz[10000];
for(i=min;i<=2*max-min;i++){sz[i]=0;}
for(d=min;d<=max;d=d+0.5){
    k=0;
    for(j=0;j<n;j++){
        if(d<=b[j]&&d>=a[j]){k++;}
    }
    if(k!=0){t=min+2*(d-min);
    sz[t]=1;}
}
for(i=min;i<=2*max-min;i++){
    if(sz[i]==0){z++;}
}
if(z==0){printf("%d %d",min,max);}
else printf("no");
return 0;
}

