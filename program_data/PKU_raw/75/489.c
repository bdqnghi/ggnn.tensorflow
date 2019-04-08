
int main()
{
	int myarray[1000]={0};
	int people[100000][2]={0};
	int size=0;
	int num=0;
	char a;
	while(1)
	{
		scanf("%d%c",&people[size++][0],&a);
		if(a!=',')break;
	}
	for(int i=0;i<size;i++)
	{
		scanf("%d%c",&people[i][1],&a);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=people[i][0]+1;j<=people[i][1];j++)
		{
			myarray[j]++;
		}
	}
	for(int i=0;i<1000;i++)
	{
		if(myarray[i]>num) num=myarray[i];
	}

	printf("%d %d\n",size,num);
}