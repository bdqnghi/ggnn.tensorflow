int main()
{
int sz[30];
int zs[25];
sz[0]=1;
sz[1]=1;
for(int i=2;i<30;i++){
sz[i]=sz[i-1]+sz[i-2];
}
int n,c,q;
scanf("%d",&n);
for(int j=0;j<n;j++){
scanf("%d",&(zs[j]));
}
for(int w=0;w<n;w++){
c=zs[w];
q=sz[c-1];
printf("%d\n",q);
}
}
