int main()
{
	int n,i,j,k,GPA,point[11],grade[11],pointsum=0;
	float gpa[11],gradesum=0.0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&point[i]);

	for(j=1;j<=n;j++)
		scanf("%d",&grade[j]);
	for(k=1;k<=n;k++)
	{
		
			if(grade[k]<=100&&grade[k]>=90) gpa[k]=4.0;
			else if(grade[k]<=89&&grade[k]>=85) gpa[k]=3.7;
			else if(grade[k]<=84&&grade[k]>=82) gpa[k]=3.3;
			else if(grade[k]<=81&&grade[k]>=78) gpa[k]=3.0;
			else if(grade[k]<=77&&grade[k]>=75) gpa[k]=2.7;
			else if(grade[k]<=74&&grade[k]>=72) gpa[k]=2.3;
			else if(grade[k]<=71&&grade[k]>=68) gpa[k]=2.0;
			else if(grade[k]<=67&&grade[k]>=64) gpa[k]=1.5;
			else if(grade[k]<=63&&grade[k]>=60) gpa[k]=1.0;
			else if(grade[k]<=59&&grade[k]>=0)  gpa[k]=0.0;
			else printf("your input is wrong");
		gradesum+=gpa[k]*point[k]; 
		pointsum+=point[k];
	

	}


	

  
	printf("%.2f",gradesum/pointsum);
	return 0;
}
