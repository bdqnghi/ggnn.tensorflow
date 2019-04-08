

int main()
{
	int i=0,j,count=-1,pos[51],k=0;
	char a[51][101],b[101],c[101],d;
	while (1)
	{
		cin>>a[i];
		i++;
		if (d=cin.get(),d=='\n')  break;
	}
	i--;
    cin>>b>>c;

	for (j=0;j<=i;j++)
	{
		if (strcmp(a[j],b)==0)
		{
			count++;
			pos[count]=j;
		}
	}

		for (j=0;j<=i;j++)
		{
			if ((k<=count)&&(pos[k]==j))
			{
				if (j==i)  cout<<c;
				else  cout<<c<<" ";
				k++;
			}
			else
			{
				if (j==i)  cout<<a[j];
				else  cout<<a[j]<<" ";
			}
		}

	return 0;
}