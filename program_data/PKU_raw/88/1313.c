

int main()
{
	char a[31];
	cin.get(a,31,'\n');

	int i=0;
	for(;a[i] != 0;i++)
	{
		if(!(a[i]>47 && a[i]<58))
			continue;
		int j=i;
		for(;j<=30;i++,j++)
			if(a[j]>47 && a[j]<58)
				cout<<a[j];
			else
			{
				cout<<endl;
				break;
			}
	}


	return 0;
}