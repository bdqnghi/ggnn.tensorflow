const int x[5]={0,0,1,0,-1};
const int y[5]={0,1,0,-1,0};
int f[1000][1000];
int main(){
int m,n,k=1;
scanf("%d %d",&m,&n);
for (int i=1; i<=m; i++){
for (int j=1; j<=n; j++){
scanf("%d",&f[i][j]);
}
}
int dx=1,dy=1;
int dm=m,dn=n,cm=1,cn=1;
int count=0;
while (count<(m*n)){
printf("%d\n",f[dx][dy]);
count++;
int tx=dx+x[k];
int ty=dy+y[k];
if ((tx>dm) || (tx<cm) || (ty>dn) || (ty<cn)){
if (k==1) cm++;
else
if (k==2) dn--;
else
if (k==3) dm--;
else
if (k==4) cn++;
k=(k % 4)+1;
tx=dx+x[k];
ty=dy+y[k];
}
dx=tx;
dy=ty;
}
//while(1);
return 0;
}
