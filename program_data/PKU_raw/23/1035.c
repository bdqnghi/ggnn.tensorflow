int main()
{
	char a[1000],b[100][100];
	int i=0,j=0,l=0;
	cin.getline(a,1000);
	int k=strlen(a);
    for(i=0;i<k;i++)
	{
		if(a[i]==' ')
		{
			j++;
			l=0;
		    i++;
		}
		b[j][l]=a[i];
		l++;

	}
    

    for(i=0;i<j;i++)
    	cout<<b[j-i]<<" ";
    cout<<b[0];

    return 0;
}