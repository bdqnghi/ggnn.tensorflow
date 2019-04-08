int main(){
int n,k;
scanf("%d%d\n",&n,&k);
int sz[NUMBER];
int i,m,q=0;
for(i=0;i<n;i++){
scanf("%d",&(sz[i]));
}
int szf[NUMBER];

for(i=0;i<n;i++){
szf[i]=k-sz[i];
}
for(m=0;m<n;m++){
for(i=0;i<n;i++){
if(szf[m]==sz[i]&&szf[m]!=sz[m]){
printf("yes");
q=1;
break;
}
}
if(q)break;
}
if(q==0){printf("no");}
return 0;
}

