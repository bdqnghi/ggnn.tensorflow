float mark(int a)
{
	if(a>=90&&a<=100)
		return(4.0);
	else if(a>=85&&a<=89)
		return(3.7);
	else if(a>=82&&a<=84)
		return(3.3);
	else if(a>=78&&a<=81)
		return(3.0);
	else if(a>=75&&a<=77)
		return(2.7);
	else if(a>=72&&a<=74)
		return(2.3);
	else if(a>=68&&a<=71)
		return(2.0);
	else if(a>=64&&a<=67)
		return(1.5);
	else if(a>=60&&a<=63)
		return(1.0);
	else if(a<=59)
		return(0);
}
int main()
{
	int n;
	int all[10]={0};
	int score[10]={0};
	float GPA;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&all[i]);
	for(i=0;i<n;i++)
		scanf("%d",&score[i]);
	float grade[10]={0};
	for(i=0;i<n;i++)
		grade[i]=mark(score[i]);
	float sum1,sum2;
	for(sum1=0,i=0;i<n;i++)
		sum1+=grade[i]*all[i];
	for(sum2=0,i=0;i<n;i++)
		sum2+=all[i];
	GPA=sum1/sum2;
	printf("%.2f",GPA);
	return(0);
}