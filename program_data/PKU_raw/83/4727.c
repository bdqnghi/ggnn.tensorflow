int main(){
	int a[1000],b[1000],i,j,n,s1=0;
	double s=0,c[1000]={0},sum,s2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
		s2+=c[i];
	}for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		if(b[i]>=90&&b[i]<=100){
			s+=4.0*c[i];
		}else if(b[i]>=85&&b[i]<=89){
			s+=3.7*c[i];
		}else if(b[i]>=82&&b[i]<=84){
			s+=3.3*c[i];
		}else if(b[i]>=78&&b[i]<=81){
			s+=3.0*c[i];
		}else if(b[i]>=75&&b[i]<=77){
			s+=2.7*c[i];
		}else if(b[i]>=72&&b[i]<=74){
			s+=2.3*c[i];
		}else if(b[i]>=68&&b[i]<=71){
			s+=2.0*c[i];
		}else if(b[i]>=64&&b[i]<=67){
			s+=1.5*c[i];
		}else if(b[i]>=60&&b[i]<=63){
			s+=1.0*c[i];
		}else if(b[i]<60){
			s+=0;
		}
	}
	sum=s/s2*1.00;
	printf("%.2lf",sum);
	return 0;
}
