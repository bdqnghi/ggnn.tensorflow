int main(){int i,j,k,z,a[1000];
scanf("%d%d",&i,&k);scanf("%d",&a[0]);a[0]=k-a[0];
for(j=1;j<=i-1;j++){scanf("%d",&a[j]);for(z=0;z<=j-1;z++){if(a[j]==a[z]){printf("yes");return 0;}}a[j]=k-a[j];}
printf("no");
return 0;}