int main(){
	int a[10],i,sum,n;
	float b[10],c[10];
	scanf("%d",&n);
	scanf("%d",&a[0]);
	sum=a[0];
	for(i=1;i<n;i++){
		scanf(" %d",&a[i]);
		sum+=a[i];
	}
	scanf("%f",&b[0]);
	for(i=1;i<n;i++){
		scanf(" %f",&b[i]);
	}
	for(i=0;i<n;i++){
		if((b[i]>=90)&&(b[i]<=100)){
		c[i]=4.0;
		}
		if((b[i]<=89)&&(b[i]>=85)){
			c[i]=3.7;
		}
		if((b[i]<=84)&&(b[i]>=82)){
			c[i]=3.3;
		}
		if((b[i]<=81)&&(b[i]>=78)){
			c[i]=3.0;
		}
		if((b[i]<=77)&&(b[i]>=75)){
			c[i]=2.7;
		}
		if((b[i]<=74)&&(b[i]>=72)){
			c[i]=2.3;
		}
		if((b[i]<=71)&&(b[i]>=68)){
			c[i]=2.0;
		}
		if((b[i]<=67)&&(b[i]>=64)){
			c[i]=1.5;
		}
		if((b[i]<=63)&&(b[i]>=60)){
			c[i]=1.0;
		}
		if(b[i]<60){
			c[i]=0;
		}
	}
		float sum1=0;
		for(i=0;i<n;i++){
			sum1+=a[i]*c[i];
		}
		float GPA;
		GPA=sum1/sum;
		printf("%.2f",GPA);
		return 0;
}