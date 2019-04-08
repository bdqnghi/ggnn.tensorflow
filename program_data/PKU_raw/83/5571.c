int main()
{
int n,i;
int sub[10],g[10],s=0;
float G[10],GPA=0;
scanf("%d\n",&n);
for(i=0;i<n-1;i++){
scanf("%d ",&sub[i]);
}
scanf("%d\n",&sub[n-1]);
for(i=0;i<n-1;i++){
scanf("%d ",&g[i]);
}
scanf("%d",&g[n-1]);
for(i=0;i<n;i++){
if(90<=g[i]&&g[i]<=100){
G[i]=4.0;
}else if(85<=g[i]&&g[i]<=89){
G[i]=3.7;
}else if(82<=g[i]&&g[i]<=84){
G[i]=3.3;
}else if(78<=g[i]&&g[i]<=81){
G[i]=3.0;
}else if(75<=g[i]&&g[i]<=77){
G[i]=2.7;
}else if(72<=g[i]&&g[i]<=74){
G[i]=2.3;
}else if(68<=g[i]&&g[i]<=71){
G[i]=2.0;
}else if(64<=g[i]&&g[i]<=67){
G[i]=1.5;
}else if(60<=g[i]&&g[i]<=63){
G[i]=1.0;
}else if(g[i]<=59){
G[i]=0;
}
G[i]*=sub[i];
GPA+=G[i];
s+=sub[i];
}
GPA=GPA/s;
printf("%.2f",GPA);
return 0;
}
