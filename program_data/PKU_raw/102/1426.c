int main()
{
	int N, k,i, j;
	char sex[10];
	double a[45], b[45], temp;
	int boy = 0, girl = 0;
	cin >> N;
	for (k = 0; k < N; k++)
	{
		cin >> sex >> temp;
		if (sex[0] == 'f' )
		{
			b[girl] = temp;
			girl++;
		}
		else
		{
			a[boy] = temp;
			boy++;
		}
	}
	for(i = 0; i < boy - 1;i++)
		for(j = 0; j < boy - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
    for(i = 0; i < girl - 1;i++)
		for(j = 0; j < girl - 1 - i;j++)
		{
			if (b[j] < b[j + 1])
			{
				temp = b[j + 1];
				b[j + 1] = b[j];
				b[j] = temp;
			}
		}
	for(i = 0; i < boy;i++)
		cout <<fixed << setprecision(2) <<  a[i] << " ";
    for(j = 0; j < girl - 1;j++)
	    cout <<fixed << setprecision(2) << b[j] << " ";
	cout <<fixed << setprecision(2)<< b[j] << endl;
	return 0;
}