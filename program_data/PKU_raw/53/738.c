
void main()
{
	int n,i;
	int a[301];
	int* input=a;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int temp;
		int isinsert=1;
		scanf("%d",&temp);
		int *find=a;
		while(find!=input)
		{
			if(temp==*(find))
			{
				isinsert=0;
				break;
			}
			find++;
		}
		if(isinsert==0)
			continue;
		*input=temp;
		input++;		
	}
	int *begin=a;
	printf("%d",*begin);
	begin++;
	while(begin!=input)
	{
		printf(",%d",*begin);
		begin++;
	}
}
