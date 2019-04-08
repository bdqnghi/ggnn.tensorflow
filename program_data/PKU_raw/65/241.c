int main(){
int n,i,c=0,d=0;
int a[1000],b[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if((a[i]-b[i]==-1)||(a[i]-b[i]==2)) c++;
else if((a[i]-b[i]==1)||(a[i]-b[i]==-2)) d++;
else ;
}
if(c>d) printf("A");
else if(c<d) printf("B");
else printf("Tie");
return 0;
}