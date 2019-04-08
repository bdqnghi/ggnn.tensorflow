int main(){
	int i,sumpoint,n;
	scanf("%d\n",&n);
	int grade[N],point[N];
	double GPA,gradepoint[N],sum;
	sumpoint=0;
	sum=0;
	for(i=0;i<n;i++){
		if(i<n-1)
	    scanf("%d",&(point[i]));
		else{scanf("%d\n",&(point[i]));
        }
	}
	for(i=0;i<n;i++){
	    scanf("%d",&(grade[i]));}
	for(i=0;i<n;i++){
		if(grade[i]<=100&&grade[i]>=90)
		   gradepoint[i]=4.0;
		if(grade[i]<=89&&grade[i]>=85)
		   gradepoint[i]=3.7;
		if(grade[i]<=84&&grade[i]>=82)
		   gradepoint[i]=3.3;		
		if(grade[i]<=81&&grade[i]>=78)
		   gradepoint[i]=3.0;		
		if(grade[i]<=77&&grade[i]>=75)
		   gradepoint[i]=2.7;		
		if(grade[i]<=74&&grade[i]>=72)
		   gradepoint[i]=2.3;		
		if(grade[i]<=71&&grade[i]>=68)
		   gradepoint[i]=2.0;		
		if(grade[i]<=67&&grade[i]>=64)
		   gradepoint[i]=1.5;		
		if(grade[i]<=63&&grade[i]>=60)
		   gradepoint[i]=1.0;
	    if(grade[i]<60)
			gradepoint[i]=0;}
	for(i=0;i<n;i++){
	    sumpoint+=point[i];
	    sum+=gradepoint[i]*point[i];}
	GPA=sum/sumpoint;
	printf("%.2lf",GPA);
	return 0;
}
	    