int main(){
	int n,i;
	scanf("%d",&n);
	int cj[10],xf[10],s2=0;
	double jd[10],xfjd[10],s1=0.0,gpa;
	for(i=0;i<n;i++){
	scanf("%d",&xf[i]);
	}
	for(i=0;i<n;i++){
	scanf("%d",&cj[i]);
	}
	for(i=0;i<n;i++){
		if(cj[i]>=90){
		jd[i]=4.0;
		}
		else if(cj[i]>=85&&cj[i]<=89){
		jd[i]=3.7;
		}
		else if(cj[i]>=82&&cj[i]<=84){
		jd[i]=3.3;
		}
		else if(cj[i]>=78&&cj[i]<=81){
		jd[i]=3.0;
		}
		else if(cj[i]>=75&&cj[i]<=77){
		jd[i]=2.7;
		}
		else if(cj[i]>=72&&cj[i]<=74){
		jd[i]=2.3;
		}
		else if(cj[i]>=68&&cj[i]<=71){
		jd[i]=2.0;
		}
		else if(cj[i]>=64){
		jd[i]=1.5;
		}
		else if(cj[i]>=60){
		jd[i]=1.0;
		}
		else{
		jd[i]=0.0;
		}

	}
for(i=0;i<n;i++){
xfjd[i]=xf[i]*jd[i];
s1=s1+xfjd[i];
s2=s2+xf[i];
}
gpa=s1/s2;
printf("%.2lf",gpa);
return 0;
}
