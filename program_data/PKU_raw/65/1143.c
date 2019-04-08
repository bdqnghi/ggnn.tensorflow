
int main(){
int i,n;
int a=0,b=0;
scanf("%d",&n);
int sz[800];
for(i=1;i<=n;i++){
scanf("%d %d",&(sz[0]),&(sz[1]));

if(sz[0]==sz[1]){a+=0;b+=0;}
else if(sz[0]!=sz[1]){
if(sz[0]==0&&sz[1]==1){a++;}
else if(sz[0]==1&&sz[1]==2){a++;}
else if(sz[0]==2&&sz[1]==0){a++;}
else if(sz[0]==1&&sz[1]==0){b++;}
else if(sz[0]==2&&sz[1]==1){b++;}
else if(sz[0]==0&&sz[1]==2){b++;}}}
if(a>b){printf("A");}
else if(a<b){printf("B");}
else if(a==b){printf("Tie");}
return 0;}

