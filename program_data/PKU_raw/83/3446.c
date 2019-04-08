int main () {
    int n,i,grade;
    double gpa,sum1,sum2,GPA;
	sum1=0;
	sum2=0;
	scanf("%d",&n);
    int sz[n];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	    sum2=sum2+sz[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&grade);
	if(grade>=90)
	       gpa=4.0;
	if((grade>=85)&&(grade<=89))
		   gpa=3.7;
    if((grade>=82)&&(grade<=84))
		   gpa=3.3;
    if((grade>=78)&&(grade<=81))
		   gpa=3.0;
    if((grade>=75)&&(grade<=77))
		   gpa=2.7;
    if((grade>=72)&&(grade<=74))
		   gpa=2.3;
    if((grade>=68)&&(grade<=71))
		   gpa=2.0;
    if((grade>=64)&&(grade<=67))
		   gpa=1.5;
    if((grade>=60)&&(grade<=63))
		   gpa=1.0; 
	if(grade<60)
		   gpa=0;
    sum1=sum1+gpa*sz[i];
    }
	GPA=sum1/sum2;
	printf("%.2lf",GPA);
	return 0;
}