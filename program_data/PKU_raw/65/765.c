int main(){
int n,i,a,b,p,q;
scanf("%d",&n);
p=0,q=0;
for(i=0;i<n;i++){
scanf("%d %d",&a,&b);
if(a-b==1){
q=q+1;}
if(a-b==2){
p=p+1;}
if(b-a==1){p=p+1;}
if(b-a==2){q=q+1;}
}
if(p>q){
printf("A");}
if(q>p){
printf("B");}
if(p==q){
printf("Tie");}
return 0;
}