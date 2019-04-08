int main()
{
	char array[501];
	cin.getline(array,501);
	int k,l,i,s=0;
	for(i=0;i<strlen(array)-1;i++)
	{
		if(array[i]==array[i+1])
		{
			cout<<array[i]<<array[i+1]<<endl;
		}
	}
	for(l=3;l<strlen(array);l++)
	{
		for(k=0;k<strlen(array)-l;k++)
		{
			for(i=0;i<=l/2;i++)
			{
				if(array[k+i]!=array[k+l-i])
				{
					s++;
					break;
				}
			}
			if(s==0)
			{
				for(i=0;i<=l;i++)
				{
					cout<<array[k+i];
				}
				cout<<""<<endl;
			}
			s=0;
		}
	}
	return 0;
}