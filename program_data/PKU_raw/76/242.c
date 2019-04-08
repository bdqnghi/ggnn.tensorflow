int main(){
int n,i,j,t,z=1;
int sa[50000],sb[50000],sz[10000];
scanf("%d",&n);
for(i=0;i<10000;i++){
  sz[i]=0;
}
for(i=0;i<n;i++){
 scanf("%d%d",&(sa[i]),&(sb[i]));
 for(j=sa[i];j<sb[i];j++){
   sz[j]=1;
 }
}
for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if(sa[j]>sa[j+1]){
			t=sa[j];
			sa[j]=sa[j+1];
			sa[j+1]=t;
		}
if(sb[j]>sb[j+1]){
			t=sb[j];
			sb[j]=sb[j+1];
			sb[j+1]=t;
		}
	}
}
for(i=sa[0];i<sb[n-1];i++){
	if(sz[i]==0)
	  z=0;
}
if(z)
printf("%d %d",sa[0],sb[n-1]);
else
printf("no");
return 0;
}