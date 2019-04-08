int main ()
{
	int sz[500];
	int u[500];
	int i,a=0,n,p,k,e;
	int s=0,z=0,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	for(i=0;i<n;i++){
		if(sz[i]%2!=0){
			e=sz[i];
			u[a]=e;
			a++;
		}
	}
	for(k=1;k<=a;k++){
		for(i=0;i<a-k;i++){
			if(u[i]>u[i+1]){
				p=u[i+1];
				u[i+1]=u[i];
				u[i]=p;
			}
		}
	}
	for(i=0;i<a-1;i++){
		printf("%d,",u[i]);
		s+=u[i];
	}
	for(i=0;i<a;i++){
		z+=u[i];
	}
	sum=z-s;
	printf("%d",sum);

	return 0;
}