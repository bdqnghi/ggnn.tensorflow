
int main()
{
	int n;
	cin >> n;

	double male[40], female[40];
	int indm=0, indf=0;
	for(int k=0;k<n;k++)
	{
		char str[10];
		
		cin >> str;
		if(!strcmp(str,"male"))
		{
			cin >> male[indm];
			indm++;
		}
		else
		{
			cin >> female[indf];
			indf++;
		}
	}
	//sort
	int i,j;
	for(i=0;i<indm;i++)
		for(j=i;j<indm;j++)
			if(male[i] > male[j])
			{
				double t = male[i];
				male[i] = male[j];
				male[j] = t;
			}
	for(i=0;i<indf;i++)
		for(j=i;j<indf;j++)
			if(female[i] < female[j])
			{
				double t = female[i];
				female[i] = female[j];
				female[j] = t;
			}
	//show
	for(i=0;i<indm;i++)
		printf("%.2lf ",male[i]);
	for(i=0;i<indf-1;i++)
		printf("%.2lf ",female[i]);
	printf("%.2lf",female[indf-1]);
	cout << endl;

	return 0;
}