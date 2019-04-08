int main()
{
	int buffer[200000];
	int NumOfBF;
	int NumToDelete;
	int NumofDel = 0;
	int i,j,k;
	scanf("%d",&NumOfBF);
	for(i = 0;i < NumOfBF;i++)
	{
			scanf("%d",&buffer[i]);
	}
	scanf("%d",&NumToDelete);
	for(j = 0;j < NumOfBF - NumofDel;j++)
	{
		if(buffer[j] == NumToDelete)
		{
		for(k = j;k < NumOfBF - NumofDel;k++)
		{
		buffer[k] = buffer[k + 1];
		}
		NumofDel++;
		j = j - 1; 
		}
	}
	printf("%d",buffer[0]);
	for(j = 1;j < NumOfBF - NumofDel;j++)
	{
	printf(" %d",buffer[j]);
	}
	printf("\n");
	return 0;
}