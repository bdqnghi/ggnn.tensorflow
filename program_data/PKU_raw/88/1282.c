int main()
{
	char an[100];
	cin.getline(an,100);
	int i,j=0;
	char bn[100];
	int n=0;
	for(i=0;i<strlen(an);	)
	{
		if(an[i]>='0'&&an[i]<='9')
		{
			bn[j]=an[i];
			i++;
			j++;
			while(an[i]>='0'&&an[i]<='9')
			{
				bn[j]=an[i];
				j++;
				i++;
			}
			bn[j]=' ';
			j++;
			i++;
			n++;
		}
		else i++;
	}

	for(int k=0;k<j-1;k++)
	{
		if(bn[k]==' ')
			cout<<endl;
		else 
			cout<<bn[k];
	}
	return 0;
}



