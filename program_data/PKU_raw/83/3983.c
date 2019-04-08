int main(){
	int i,k,n,t,p;
	float jdh=0;
	int xfh=0;
	int xf[10];
	int df[10];
	float jd[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xf[i]);
		xfh+=xf[i];
	}
	for(k=0;k<n;k++){
		scanf("%d",&df[k]);
	}
	for(p=0;p<n;p++){
		if(df[p]>89){
			jd[p]=4.0;
		}
		else if(df[p]>84&&df[p]<90){
			jd[p]=3.7;
		}
		else if(df[p]>81&&df[p]<85){
			jd[p]=3.3;
		}
	    else if(df[p]>77&&df[p]<82){
			jd[p]=3.0;
		}
		else if(df[p]>74&&df[p]<78){
			jd[p]=2.7;
		}
		else if(df[p]>71&&df[p]<75){
			jd[p]=2.3;
		}
		else if(df[p]>67&&df[p]<72){
			jd[p]=2.0;
		}
		else if(df[p]>63&&df[p]<68){
			jd[p]=1.5;
		}
		else if(df[p]>59&&df[p]<64){
			jd[p]=1.0;
		}
		else{
			jd[p]=0;
		}
	}
	for(t=0;t<n;t++){
		jdh+=xf[t]*jd[t];
	}
	float zjd=jdh/xfh;
	printf("%.2f",zjd);
	return 0;
}