


void up(char *input)
{
	while (*input)
	{
		if (((*input)>='a')&&((*input)<='z')) *input-=32;
		input++;
	}
}

int main()
{
	char chart[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int src=0,dst=0;

	int i;
	long int result=0;
	char input[100],output[MAX],*curr;


	scanf("%d %s %d",&src,input,&dst);

	up(input);
	for(i=0;input[i];i++)
	{
		if (input[i]>='A')
			result=result*src+input[i]-'A'+10;
		else result=result*src+input[i]-'0';
	}
	output[MAX-1]=0;
	curr=&(output[MAX-1]);
	do 
	{
		curr--;
		*curr=chart[result%dst];
		result/=dst;
	}while (result);
	printf("%s",curr);
	return 0;
}