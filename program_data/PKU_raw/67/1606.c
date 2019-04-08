
int main(int argc, char* argv[])
{
	int n,a[100],b[100],i;
	double c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
        c[i]=1.0*b[i]/a[i];
	}
	for(i=1;i<n;i++){
		if(c[i]-c[0]>0.05){
			printf("better\n");
		}else if(c[0]-c[i]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}

