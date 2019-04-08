int main(){
	double a[10]={0};
	double b[10]={0};
	double c[10]={0};
	int N;
	int i;
	int	k=0;
	int x;
	double total1=0;
	double total2=0;
	double GPA;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&x);
		a[i]=x;
	}
	for(i=0;i<N;i++){
		scanf("%d",&x);
		b[i]=x;
	}
	for(i=0;i<N;i++){
		if(b[i]>=90&&b[i]<=100){
			c[i]=4.0;
		}else if(b[i]>=85&&b[i]<=89){
			c[i]=3.7;
		}else if(b[i]>=82&&b[i]<=84){
			c[i]=3.3;
		}else if(b[i]>=78&&b[i]<=81){
			c[i]=3.0;
		}else if(b[i]>=75&&b[i]<=77){
			c[i]=2.7;
		}else if(b[i]>=72&&b[i]<=74){
			c[i]=2.3;
		}else if(b[i]>=68&&b[i]<=71){
			c[i]=2.0;
		}else if(b[i]>=64&&b[i]<=67){
			c[i]=1.5;
		}else if(b[i]>=60&&b[i]<=63){
			c[i]=1.0;
		}else if(b[i]>=0&&b[i]<=59){
			c[i]=0;
		}
	}
	for(i=0;i<N;i++){
		total1+=a[i]*c[i];
	}
	for(i=0;i<N;i++){
		total2+=a[i];
	}
	GPA=total1/total2;
	printf("%.2lf",GPA);
	return 0;
}
