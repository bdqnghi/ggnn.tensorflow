int main()
{
	int num;
	int b=0,g=0;
	double temp;
	char sex[40][10] = {NULL};
	double h[40] = {0.0};
	double boy[40] = {0.0};
	double girl[40] = {0.0};
	int i,j;
	cin>>num;
	for(i=0;i<num;i++)
		cin>>sex[i]>>h[i];
	for(i=0;i<num;i++)
	{
		if(!strcmp(sex[i],"male"))
		{
			boy[b] = h[i];
			b++;
		}
		if(!strcmp(sex[i],"female"))
		{
			girl[g] = h[i];
			g++;
		}

	}
	for(i=0;i<b-1;i++)
		for(j=i;j<b;j++)
		{
			if(boy[i]>boy[j])
			{
				temp = boy[j];
				boy[j] = boy[i];
				boy[i] = temp;
			}
		}
	for(i=0;i<g-1;i++)
		for(j=i;j<g;j++)
		{
			if(girl[i]<girl[j])
			{
				temp = girl[j];
				girl[j] = girl[i];
				girl[i] = temp;
			}
		}
	for(i=0;i<b;i++)
		printf("%.2f ",boy[i]);
	for(i=0;i<g;i++)
	{
		printf("%.2f",girl[i]);
		if(i<g-1)
			printf(" ");
	}
	
	return 0;
}