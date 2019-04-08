int main(){
int n,i,k,e,a[1000],b[1000],x=1;
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d %d\n",&a[i],&b[i]);
for(k=1;k<=n;k++){for(i=0;i<n-k;i++) if(a[i]>a[i+1]){e=a[i+1];
                                                     a[i+1]=a[i];
                                                     a[i]=e; }
                 } 
for(k=1;k<=n;k++){for(i=0;i<n-k;i++) if(b[i]>b[i+1]){e=b[i+1];
                                                     b[i+1]=b[i];
                                                     b[i]=e; }
                 } 
for(i=0;i<n;i++) {if(a[i+1]>b[i]) {x=0;
                                   break;}
                  }
if(x==0) printf("no");
else printf("%d %d",a[0],b[n-1]);
return 0;}