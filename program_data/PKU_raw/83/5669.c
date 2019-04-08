double zpjd (int n,int a[],int b[]);
int main(){
	int n,i;
	double c;
    scanf("%d",&n);
	int a[9],b[9];
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	c=zpjd(n,a,b);
	printf("%.2lf",c);
	return 0;
}
double zpjd(int n,int a[],int b[]){
	int i=0;
	double ax[9];
	for(i=0;i<n;i++){
		if(a[i]>=90&&a[i]<=100){
			ax[i]=4.0;
		}
		else if(a[i]>=85&&a[i]<=89){
			ax[i]=3.7;
		}
		else if(a[i]>=82&&a[i]<=84){
			ax[i]=3.3;
		}
		else if(a[i]>=78&&a[i]<=81){
			ax[i]=3.0;
		}
		else if(a[i]>=75&&a[i]<=77){
			ax[i]=2.7;
		}
		else if(a[i]>=72&&a[i]<=74){
			ax[i]=2.3;
		}
		else if(a[i]>=68&&a[i]<=71){
			ax[i]=2.0;
		}
		else if(a[i]>=64&&a[i]<=67){
			ax[i]=1.5;
		}
		else if(a[i]>=60&&a[i]<=63){
			ax[i]=1.0;
		}
		else if(a[i]<=59){
			ax[i]=0;
		}
	}
	double s1,s2,c;
	s1=0;
	s2=0;
	for(i=0;i<n;i++){
		s1=s1+ax[i]*b[i]*1,0;
	}
	for(i=0;i<n;i++){
		s2=s2+b[i]*1.0;
	}
	c=s1/s2*1.0;
	return c;
}
		