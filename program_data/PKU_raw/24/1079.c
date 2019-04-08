int main()
{
	char str[100];
	int spa[100];
	int length[100];
	int i, j=0, max, min, max_i, min_i, size;
	cin.getline(str,100,'\n');
	for (i=0;str[i]!=0;i++)
	{
		if (str[i]==' ')
		{
			spa[j]=i;
			j++;
		}
	}
	size=i;
	for (i=1;i<j;i++) length[i]=spa[i]-spa[i-1]-1;
	length[0]=spa[0];
	length[j]=size-spa[j-1]-1;
	max=min=length[0];
	max_i=min_i=0;
	for (i=0;i<=j;i++)
	{
		if (length[i]>max) max=length[i], max_i=i;
		if (length[i]<min) min=length[i], min_i=i;
	}
	if (max_i==0) 
	{
		for (i=0;i<spa[0];i++) cout<<str[i];
	}
	else if (max_i<j)
	{
		for (i=spa[max_i-1]+1;i<spa[max_i];i++) cout<<str[i];
	}
	else if (max_i==j)
	{
		for (i=spa[j-1]+1;i<size;i++) cout<<str[i];
	}
	cout<<endl;
	if (min_i==0) 
	{
		for (i=0;i<spa[0];i++) cout<<str[i];
	}
	else if (min_i<j)
	{
		for (i=spa[min_i-1]+1;i<spa[min_i];i++) cout<<str[i];
	}
	else if (min_i==j)
	{
		for (i=spa[j-1]+1;i<size;i++) cout<<str[i];
	}
	cout<<endl;
	return 0;
}