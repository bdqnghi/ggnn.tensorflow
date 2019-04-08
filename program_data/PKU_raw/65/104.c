int main(){
int i,n,a[1000],b[1000],q=0,w=0,e=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
if(a[i]==b[i]) q++;
if(a[i]<b[i]){
if(a[i]==0&&b[i]==2) e++;
else w++;
}
if(a[i]>b[i]){
if(a[i]==2&&b[i]==0) w++;
else e++;
}
}
if(e>w) printf("B");
if(e<w) printf("A");
if(e==w) printf("Tie");
	return 0;
}
