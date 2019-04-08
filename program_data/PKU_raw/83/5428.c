int main(){
	int x[max],s[max],n,i;
	float c,GPA,b,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);}
                for(i=0;i<n;i++){scanf("%d",&s[i]);}
        b=0;
	for(i=0;i<n;i++){
		if(s[i]>=90){c=4.0;}
		else if(s[i]<90&&s[i]>=85){c=3.7;}
		else if(s[i]<85&&s[i]>=82){c=3.3;}
		else if(s[i]<82&&s[i]>=78){c=3.0;}
		else if(s[i]<78&&s[i]>=75){c=2.7;}
		else if(s[i]<75&&s[i]>=72){c=2.3;}
		else if(s[i]<72&&s[i]>=68){c=2.0;}
		else if(s[i]<68&&s[i]>=64){c=1.5;}
		else if(s[i]<64&&s[i]>=60){c=1.0;}
		else{c=0;}
		b=b+c*x[i];
                m=m+x[i];}
	GPA=b/m;
	printf("%.2f",GPA);
	return 0;
}