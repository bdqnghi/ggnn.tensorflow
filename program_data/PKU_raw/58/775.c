
int main ()
{
	int n,i,j,m,l;
	cin >>n;
	char b;
	char a[100];
	for (i=0;i<n;i++)
	{
		l=1;
		cin.get(b);
		cin.get(a,100,'\n');
	j=0;
	int k=0;
	while(a[j]!='\0')
	{
		j++;
		k++;
	}
	
	if ((a[0]==95)||(a[0]>64&&a[0]<91)||(a[0]>96&&a[0]<123))
	{
		for (m=1;m<k;m++)
		{
			if (!((a[m]==95)||(a[m]>64&&a[m]<91)||(a[m]>96&&a[m]<123)||(a[m]>47&&a[m]<58)))
			{cout <<0<<endl;
			l=0;
			break;}
		}
		if (l)cout <<1 <<endl;
	}
	else  cout <<0<<endl;
	}
	return (0);
}

