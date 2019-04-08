int main() {
int n,k,i,j,sz[1000],sum;
scanf("%d%d",&n,&k);
for(i=0;i<n-1;i++)
scanf("%d",&sz[i]);
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
    	sum=sz[i]+sz[j];
if(k==sum){
printf("yes");
break;
}
}
if(k==sum)
break;
if(i==(n-1)&&(sz[i-1]+sz[i])!=k)
printf("no");
}
return 0;
}