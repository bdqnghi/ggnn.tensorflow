int main(){
	double rate;
	scanf("%lf",&rate);
	char DNA[2][501];
	scanf("%s",DNA[0]);
	scanf("%s",DNA[1]);
	int t;
	int i,j;
	int number=0;
	t=strlen(DNA[0]);
	int w;
	w=strlen(DNA[1]);
	if (t!=w)
	{
		printf("error");
		
		return 0;
	}
	for (i=0;i<t;i++)
	{
		if (DNA[0][i]!='A'&&DNA[0][i]!='T'&&DNA[0][i]!='C'&&DNA[0][i]!='G')
		{
			printf("error");
			
			return 0;
		}
		if (DNA[1][i]!='A'&&DNA[1][i]!='T'&&DNA[1][i]!='C'&&DNA[1][i]!='G')
		{
			printf("error");
			
			return 0;
		}
		if (DNA[0][i]==DNA[1][i])
		{
			number++;
		}
		
	}
	double r;
	r=1.00*number/t;
	if (r>=rate)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}


	
	return 0;

}