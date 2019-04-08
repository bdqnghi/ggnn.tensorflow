int main(){
    int n;
	scanf("%d",&n);
	int xf[10];
	int cj[10];
	int i;
	int sum=0;
	for(i=0;i<=n-1;i++){
		scanf("%d",&xf[i]);
		sum+=xf[i];
	}
	for(i=0;i<=n-1;i++){
		scanf("%d",&cj[i]);
	}
	double gpa=0;
    for(i=0;i<=n-1;i++){
        if(cj[i]>=90&&cj[i]<=100){
			gpa+=4.0*xf[i];
		}else if(cj[i]>=85&&cj[i]<=89){
			gpa+=3.7*xf[i];
		}else if(cj[i]>=82&&cj[i]<=84){
			gpa+=3.3*xf[i];
		}else if(cj[i]>=78&&cj[i]<=81){
			gpa+=3.0*xf[i];
		}else if(cj[i]>=75&&cj[i]<=77){
			gpa+=2.7*xf[i];
		}else if(cj[i]>=72&&cj[i]<=74){
			gpa+=2.3*xf[i];
		}else if(cj[i]>=68&&cj[i]<=71){
			gpa+=2.0*xf[i];
		}else if(cj[i]>=64&&cj[i]<=67){
			gpa+=1.5*xf[i];
		}else if(cj[i]>=60&&cj[i]<=63){
			gpa+=1.0*xf[i];
		}
	}
	printf("%.2lf",gpa/sum);
	return 0;
}