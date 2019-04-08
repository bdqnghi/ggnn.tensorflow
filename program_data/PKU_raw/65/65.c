
int main(){
int i,n,c=0,f=0;
scanf("%d",&n);
struct  ppp{
int a;int b;}p[200];
for(i=0;i<n;i++){
scanf("%d %d",&p[i].a,&p[i].b);}
for(i=0;i<n;i++){
if(((p[i].a==2)&&(p[i].b==0))||((p[i].a==0)&&(p[i].b==1))||((p[i].a==1)&&(p[i].b==2)))
c++;
if(((p[i].a==2)&&(p[i].b==2))||((p[i].a==0)&&(p[i].b==0))||((p[i].a==1)&&(p[i].b==1)))
f++;}
if(c>(n-f-c))  printf("A");
else if(c<(n-f-c))   printf("B");

else  printf("Tie");


return 0;}
