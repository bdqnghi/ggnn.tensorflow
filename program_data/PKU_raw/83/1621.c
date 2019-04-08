int main (){
	int numberOfCourse,i,j;
	int sumOfCredits=0;
	float sum=0.0,average,grade;
	int credits[11];
	int grades[11];

	scanf("%d",&numberOfCourse);

	for (i=0;i<numberOfCourse;i++)
		scanf("%d",&credits[i]);

	for (i=0;i<numberOfCourse;i++)
		scanf("%d",&grades[i]);

	for (i=0;i<numberOfCourse;i++)
	{		
		if((grades[i]>=90)&&(grades[i]<=100)){
			grade=4;}
		else if((grades[i]>=85)&&(grades[i]<=89)){
			grade=3.7;}
		else if((grades[i]>=82)&&(grades[i]<=84)){
			 grade=3.3;}
		else if((grades[i]>=78)&&(grades[i]<=81)){
			grade=3.0;}
		else if((grades[i]>=75)&&(grades[i]<=77)){
			grade=2.7;}
		else if((grades[i]>=72)&&(grades[i]<=74)){
			grade=2.3;}
		else if((grades[i]>=68)&&(grades[i]<=71)){
			grade=2.0;}
		else if((grades[i]>=64)&&(grades[i]<=67)){
			grade=1.5;}
		else if((grades[i]>=60)&&(grades[i]<=63)){
			grade=1.0;}
		else if((grades[i]>=0)&&(grades[i]<=59)){
			grade=0;}

		sumOfCredits += credits[i];
		sum += credits[i] * grade;
	}
	printf("%.2f",sum/sumOfCredits);
	return 0;		

}