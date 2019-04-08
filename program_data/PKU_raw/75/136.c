int main()
{
	char come[110000],go[110000];
	cin.getline(come,110000);
	cin.getline(go,110000);
	int x=1,i,j=1;
	int people=1,size=strlen(come);
	for(i=0;i<size;i++)
		if(come[i]==',')
		  people++;
		cout<<people;
	int come1[1000],go1[1000];
	come1[0]=atoi(come);
	for(i=0;i<size;i++)
		if(come[i]==',')
		{
			come1[j]=atoi(come+i+1);
			j++;
		}
	j=1;
	size=strlen(go);
	go1[0]=atoi(go);
	for(i=0;i<size;i++)
		if(go[i]==',')
		{
			go1[j]=atoi(go+i+1);
			j++;
		}
	int max=0;
	for(i=0;i<=1000;i++)
	{
		int number=0;
		for(j=0;j<people;j++)
		{
			if(i>=come1[j]&&i<go1[j])
				number++;
		}
		if(number>max)
			max=number;
	}

	cout<<' '<<max;
	return 0;

}


