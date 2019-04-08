int main(){
	int n,i,k=0,r=0,t;
	double fm[40],m[40],e,h;
	char x[7];
	struct pd{
		double h;
		char x[7];
	}pds[40];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",x,&h);
		strcpy(pds[i].x,x);
		pds[i].h=h;
	}
	for(i=0;i<n;i++){
		if(strcmp(pds[i].x,"male")==0){
			m[k]=pds[i].h;
			k++;
		}else{
			fm[r]=pds[i].h;
			r++;
		}
	}for(t=1;t<=k;t++){
		for(i=0;i<k-t;i++){
			if(m[i]>m[i+1]){
				e=m[i];
				m[i]=m[i+1];
				m[i+1]=e;
			}
		}
	}
	for(t=1;t<=r;t++){
		for(i=0;i<r-t;i++){
			if(fm[i]<fm[i+1]){
				e=fm[i];
				fm[i]=fm[i+1];
				fm[i+1]=e;
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%.2lf ",m[i]);
	}
	for(i=0;i<r-1;i++){
		printf("%.2lf ",fm[i]);
	}
	printf("%.2lf",fm[r-1]);
	return 0;
}
