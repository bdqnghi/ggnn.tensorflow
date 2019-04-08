int main(){
	int n,s=0,a[15],f,i;
	double b[15],sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		s+=a[i];
	}
	for(i=1;i<=n;i++){
		scanf("%d",&f);
		if(f>=90){b[i]=4;}
		else if(f>=85){b[i]=3.7;}
		else if(f>=82){b[i]=3.3;}
		else if(f>=78){b[i]=3;}
		else if(f>=75){b[i]=2.7;}
		else if(f>=72){b[i]=2.3;}
		else if(f>=68){b[i]=2;}
		else if(f>=64){b[i]=1.5;}
		else if(f>=60){b[i]=1;}
		else {b[i]=0;}
	}
	for(i=1;i<=n;i++){
		sum+=a[i]*b[i];
	}
	printf("%.2lf",sum/s);
	return 0;
}
