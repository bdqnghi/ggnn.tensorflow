int main(){
int a,b,c,d,e,k,f=0,n,sz[50001][4],dsz[100000];
for(a=0;a<100000;a++){dsz[a]=0;}
scanf("%d",&n);
for(a=0;a<n;a++){
    for(b=0;b<2;b++){
      scanf("%d",&sz[a][b]);}}
for(a=0;a<n;a++){
    sz[a][2]=2*sz[a][0];sz[a][3]=2*sz[a][1];
    for(k=sz[a][2];k<=sz[a][3];k++){dsz[k]=1;}}
c=sz[0][2];
d=sz[0][3];
for(a=1;a<n;a++){
       if(sz[a][2]<c){c=sz[a][2];}
       if(sz[a][3]>d){d=sz[a][3];}}
e=d-c+1;
for(k=0;k<100000;k++){if(dsz[k]==1){f++;}}
if(e==f){printf("%d %d",c/2,d/2);}
if(e!=f){printf("no");}
return 0;
}


      