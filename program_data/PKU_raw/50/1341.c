int month(int i)
{
	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		return 31;
	else if(i==2)
		return 28;
	    else
			return 30;
}

int main()
{
	int k,i;
	scanf("%d",&k);
	k=k+12;
	k=k%7;
	if(k==5)
		printf("1\n");
	for(i=1;i<12;i++)
	{
		k+=month(i);
		k=k%7;
		if(k==5)
			printf("%d\n",i+1);
	}
return 0;
}
