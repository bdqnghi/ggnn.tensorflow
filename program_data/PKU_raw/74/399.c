int pp(int a){
 int i;
for(i=2;i<a/2+1;i++) 
if(a%i==0){return 0;break;}
if(i==a/2+1)return 1;}

int ppp(int a,int b){
int m[10];
int i;
for(i=0;i<b;i++){
 m[i]=a%10;
 a=a/10;}
for(i=0;i<=b/2;i++){
 if(m[i]!=m[b-i-1])break;}
if(i==b/2+1)return 1;
else return 0;}

int qq(int a){
 int k;
 for(k=0;a>0;k++)
  a=a/10;
 return k;}


void main(){

 
 int m,n,i,j,k=0,b,c,v;


 scanf("%d %d",&m,&n);

 

 for(i=m;i<=n;i++){

  b=pp(i);
  if(b){j=qq(i);
  c=ppp(i,j);}


  
  if(b*c){printf("%d",i);k=1;v=i;break;}}

if(k)
for(i=v+1;i<=n;i++){
  
  b=pp(i);
  if(b){j=qq(i);
  c=ppp(i,j);}


  
  if(b*c){printf(",%d",i);k=1;}}
  

 if(k==0)printf("no");


   }

