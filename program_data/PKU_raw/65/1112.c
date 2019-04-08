int main()
{
int n;
scanf("%d\n",&n);
int sz[200],sb[200];
int i,j;
for(i=0;i<n;i++){
scanf("%d ",&sz[i]);
scanf("%d\n",&sb[i]);
}
int a=0,b=0,tie=0;
for(i=0;i<n;i++){
if(sz[i]==0&&sb[i]==1){
    a=a+1;}
else if(sz[i]==1&&sb[i]==2){
    a=a+1;}
else if(sz[i]==2&&sb[i]==0){
    a=a+1;}
else if(sz[i]==0&&sb[i]==2){
    b=b+1;}
else if(sz[i]==1&&sb[i]==0){
    b=b+1;}
else if(sz[i]==2&&sb[i]==1){
    b=b+1;}
else{tie=tie+1;}
}
if(a>b){printf("A");}
else if(a<b){printf("B");}
else{printf("Tie");}
return 0;
}




 

