int main(){
	int n,i,a,sum2;
	int xuefen[10];
	double GPA,sum1;
	double jidian[10];
	sum1=0;
	sum2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xuefen[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a>89&&a<101){
			jidian[i]=4.0;
		}else if(a>84&&a<90){
			jidian[i]=3.7;
		}else if(a>81&&a<85){
			jidian[i]=3.3;
		}else if(a>77&&a<82){
			jidian[i]=3.0;
		}else if(a>74&&a<78){
			jidian[i]=2.7;
		}else if(a>71&&a<75){
			jidian[i]=2.3;
		}else if(a>67&&a<72){
			jidian[i]=2.0;
		}else if(a>63&&a<68){
			jidian[i]=1.5;
		}else if(a>59&&a<64){
			jidian[i]=1.0;
		}else{
			jidian[i]=0.0;
		} 
	}
	
	for(i=0;i<n;i++){
		jidian[i]=jidian[i]*xuefen[i];
	}
	for(i=0;i<n;i++){
		sum1+=jidian[i];
		sum2+=xuefen[i];
	}
	GPA=sum1/sum2;
	printf("%.2f",GPA);
	return 0;
}