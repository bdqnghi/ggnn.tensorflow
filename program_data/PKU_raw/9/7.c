
int main()
{
	int	i, j, n, sr=0, jr=0, age, srage[100], jrage[100];
	char num[10], srnum[100][10], jrnum[100][10];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s %d", &num, &age);
		if(age<60)
		{
			strcpy(jrnum[jr],num);
			jrage[jr]=age;
			jr++;
		}
		else
		{
			strcpy(srnum[sr],num);
			srage[sr]=age;
			sr++;
		}
	}
	for(i=sr-1; i>=0; i--)
	{
		for(j=0; j<i; j++)
		{
			if(srage[j]<srage[j+1])
			{
				age=srage[j];
				srage[j]=srage[j+1];
				srage[j+1]=age;
				strcpy(num,srnum[j]);
				strcpy(srnum[j],srnum[j+1]);
				strcpy(srnum[j+1],num);
			}
		}
	}
	for(i=0; i<sr; i++) printf("%s\n", srnum[i]);
	for(i=0; i<jr; i++) printf("%s\n", jrnum[i]);
	return 0;
}