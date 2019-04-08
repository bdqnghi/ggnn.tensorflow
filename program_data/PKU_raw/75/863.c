int main()
{
	int intime[9999],outtime[9999],count=0,sum[1000]={0};
	//intime???????outtime???????count?????sum?????????
	char temp;
	int i=0,j=0,max=0;//????i,j?max?????

	while (1) //?????
	{
		cin>>intime[count];
		cin.get(temp);
		if (temp!='\n')  count++;
		else { count++; break;}
	}
	count=0;
	while (1)  //?????
	{
		cin>>outtime[count];
		cin.get(temp);
		if (temp!='\n')  count++;
		else { count++; break;}
	}

	for (i=0;i<count;i++)
	{
		for (j=intime[i];j<outtime[i];j++)
			sum[j]++;
	}
	
	for (i=0;i<1000;i++)
	{
		if ( sum[i]>max) max=sum[i];
	}

	cout<<count<<" "<<max<<endl;
	

return 0;}