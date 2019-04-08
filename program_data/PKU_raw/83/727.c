int main()
{
	int n,i,j;
	int s[2][10];
    scanf("%d",&n);
	for(i=0;i<2;i++){
		for(j=0;j<n;j++){
			scanf("%d", &s[i][j]);
		}
	}
    float A[10];
	float B[10];
	int sum=0;
	for(i=0;i<n;i++){
		sum += s[0][i];
	}
	for(i=0;i<n;i++){
		if(s[1][i]>=90)
			A[i]=4.0;
		else if(s[1][i]>=85)
			A[i]=3.7;
		else if(s[1][i]>=82)
			A[i]=3.3;
		else if(s[1][i]>=78)
			A[i]=3.0;
		else if(s[1][i]>=75)
			A[i]=2.7;
		else if(s[1][i]>=72)
			A[i]=2.3;
        else if(s[1][i]>=68)
			A[i]=2.0;
        else if(s[1][i]>=64)
			A[i]=1.5;
        else if(s[1][i]>=60)
			A[i]=1.0;
        else if(s[1][i]<60)
			A[i]=0;
	}
	float gpa,GPA;
	for(i=0;i<n;i++){
		B[i]=A[i]*s[0][i];
		gpa += B[i];
	}
	GPA=gpa/sum;
    printf("%.2f", GPA);
	return 0;
}