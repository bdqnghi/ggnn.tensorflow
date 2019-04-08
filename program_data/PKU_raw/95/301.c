int main()
{
	char A[81]={0},B[81]={0};
	int i,t;
	gets(A);
	gets(B);
	for(i=0;i<strlen(A);i++)
	{
		if(A[i]>='a'&&A[i]<='z')
		{
	
			A[i]=A[i]-32;
		}
	}
	for(i=0;i<strlen(B);i++)
	{
		if(B[i]>='a'&&B[i]<='z')
		{
	
			B[i]=B[i]-32;
		}
	}
	//printf("%s %s",A,B);
	if(strlen(A)<strlen(B))
		t=strlen(A);
	else
		t=strlen(B);



	for(i=0;i<t;i++)
	{
		if(A[i]>B[i])
		{
			printf(">");
			return 0;
		
		} 
		if(A[i]<B[i])
			{
				printf("<");
				return 0;
			}
	}
	if(strlen(A)==strlen(B))
	{
		printf("=");
		return 0;
	}
		if(strlen(A)<strlen(B))
			printf("<");
			else
				printf(">");

	return 0;
}

