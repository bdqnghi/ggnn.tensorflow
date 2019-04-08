int main(){
	int n,a[10],b[10];
	int i;
	float c[10],GPA=0,score=0;
	scanf("%d",&n);
	for (i=0;i<n;i=i+1){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i=i+1){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i=i+1){
		if(b[i]>=90){c[i]=4.0;}
		else if(b[i]>=85){c[i]=3.7;}
		else if(b[i]>=82){c[i]=3.3;}
		else if(b[i]>=78){c[i]=3.0;}
		else if(b[i]>=75){c[i]=2.7;}
		else if(b[i]>=72){c[i]=2.3;}
		else if(b[i]>=68){c[i]=2.0;}
		else if(b[i]>=64){c[i]=1.5;}
		else if(b[i]>=60){c[i]=1.0;}
		else {c[i]=0;}
	
	}
	for(i=0;i<n;i=i+1){
		GPA=GPA+a[i]*c[i];
		score=score+a[i];
	}
	GPA=GPA/score;
	printf("%.2lf\n",GPA);
}