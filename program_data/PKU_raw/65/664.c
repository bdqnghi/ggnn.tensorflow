int main ()
{
int i,n,p,q;
int a[200],b[200];
scanf("%d\n",&n);
p=0;
q=0;
for(i=0;i<n;i++){
scanf("%d%d\n",&a[i],&b[i]);
if(a[i]==b[i]+1){
q=q+1;}else if(a[i]==b[i]+2){
p=p+1;}else if(a[i]==b[i]-1){
p=p+1;}else if(a[i]==b[i]-2){
q=q+1;}
}
if(p>q){
printf("A");}
else if(p==q){
printf("Tie");}
else if(p<q){
printf("B");}
return 0;
}