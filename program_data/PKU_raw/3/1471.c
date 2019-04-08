int main(){
int k,n,i,m,x,y,z,c;
c=0;
scanf("%d",&n);
scanf("%d",&k);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&(a[i]));
}
for(i=0;i<n;i++){
for(x=0;x<n;x++){
if(x==i){
continue;
}
if(a[x]+a[i]==k){
c=1;
}
}
}
if(c==0)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}

