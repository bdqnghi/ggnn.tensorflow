int main(){
	double a[MAX],j,sum=0,c,b,d;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<=a[i];j++){
			if(j==1){
			c=2;
			b=1;
			}
			sum+=c/b;
			d=b;
			b=c;
			c=c+d;
		}	
			printf("%.3lf\n",sum);
			sum=0;
		}
		return 0;
	}

