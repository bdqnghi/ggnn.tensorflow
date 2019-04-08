double judge(int a)
{
	if(a<=100&&a>=90)
		return 4.0;
	else if(a<=89&&a>=85)
		return 3.7;
	else if(a<=84&&a>=82)
		return 3.3;
	else if(a<=81&&a>=78)
		return 3.0;
	else if(a<=77&&a>=75)
		return 2.7;
	else if(a<=74&&a>=72)
		return 2.3;
	else if(a<=71&&a>=68)
		return 2.0;
	else if(a<=67&&a>=64)
		return 1.5;
	else if(a<=63&&a>=60)
		return 1.0;
	else
		return 0.0;
}
int main()
{
	int n,i,*pp[2],sumPOINT=0;
	double sumGPA=0.0;
	scanf("%d",&n);
	pp[0]=(int*)malloc(sizeof(int)*n);
	pp[1]=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",pp[0]+i);
		sumPOINT+=*(pp[0]+i);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",pp[1]+i);
		sumGPA+=judge(*(pp[1]+i))**(pp[0]+i);
	}
	free(pp[0]);
	free(pp[1]);
	printf("%.2f\n",sumGPA/sumPOINT);
	return 0;
}