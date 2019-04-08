int main(){
	int a[10],b[10];
	int n,i,m=0;
	double s=0,GPA;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		scanf("%d",&a[i]);
		m+=a[i];
	}
	for(i=1;i<n+1;i++){
		scanf("%d",&b[i]);
	}
	for(i=1;i<n+1;i++){
		if(b[i]>89){
			s=s+a[i]*4.0;
		}else if(b[i]>84){
			s=s+a[i]*3.7;
		}else if(b[i]>81){
			s=s+a[i]*3.3;
		}else if(b[i]>77){
			s=s+a[i]*3.0;
		}else if(b[i]>74){
			s=s+a[i]*2.7;
		}else if(b[i]>71){
			s=s+a[i]*2.3;
		}else if(b[i]>67){
			s=s+a[i]*2.0;
		}else if(b[i]>63){
			s=s+a[i]*1.5;
		}else if(b[i]>59){
			s=s+a[i]*1.0;
		}else{
			s=s;
		}
	}
	GPA=1.0*s/m;
	printf("%.2lf",GPA);




return 0;
}