int main()
{
int n,i,j,t;
int sz[100];
scanf("%d",&n);
for(i=0;i<n-1;i++){
scanf("%d ",&sz[i]);
}
scanf("%d",&sz[n-1]);
for(i=0,j=n-1;i<j;i++,j--){
t=sz[j];
sz[j]=sz[i];
sz[i]=t;
}
for(i=0;i<n-1;i++){
printf("%d ",sz[i]);
}
printf("%d",sz[n-1]);
return 0;
}