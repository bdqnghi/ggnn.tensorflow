int main (){
int n,i,j,k,h,l;
scanf("%d",&n);
k=0;
int a[11];
int b[11];
int c[11];
int f[100];
int e[100];
double d[10000];
for(i=0;i<n;i++){
	scanf("%d%d%d",&(a[i]),&(b[i]),&(c[i]));
}
k=1;
d[0]=0;
for(j=0;j<n;j++){
   for(i=j+1;i<n;i++){
	d[k]=sqrt((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i])+(c[j]-c[i])*(c[j]-c[i]));
	e[k]=i;   
	f[k]=j;   //??d[k]???j,i
	k++;

   }l=k;

}for(h=0;h<n*n;h++){
	for(k=0;k<=l;k++){
		if(d[k]!=0){
	   for(i=0;i<=l;i++){
		   if(d[k]<d[i]){
			   break;
		   }if(i==(l-1)){
			   printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[f[k]],b[f[k]],c[f[k]],a[e[k]],b[e[k]],c[e[k]],d[k]);
			   d[k]=0;
			     k=0;
			     i=0;
			   break;

		   }
		}
		}
	   }
    }
    return 0;
}
