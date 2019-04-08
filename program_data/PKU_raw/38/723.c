int main(){
int n,k,i,j;
double sz[100],sum=0,p,q,w;
scanf("%d",&k);
for(i=0;i<k;i++){
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%lf",&sz[j]);
	}
	for(j=0;j<n;j++){
		sum+=sz[j];
	}
	p=sum/n;
	sum=0;
	for(j=0;j<n;j++){
		sum+=(sz[j]-p)*(sz[j]-p);
		q=sum/n;
	}
	w=sqrt(q);
	printf("%.5lf\n",w);
	sum=0;
}
}