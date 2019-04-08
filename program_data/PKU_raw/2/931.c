

int n,i,p,j,t,q;
int SAVER[1500];
char R[1500][50];
int RR[50];

int main()
{
	cin>>n;
	t=0;
	for (i=1;i<=n;i++)
	{
		cin>>SAVER[i];
		cin.get();
		cin>>R[i];
		j=0;
		while (R[i][j]!='\0')
		{
			RR[R[i][j]-'A']++;
			j++;
		}
	}
	for (i='A';i<='Z';i++)
		if (RR[i-'A']>t)
		{
			t=RR[i-'A'];
			q=i;
		}
	cout<<(char)q<<endl<<t<<endl;
	for (i=1;i<=n;i++)
	{
		j=0;
		while (R[i][j]!='\0')
		{
			if (R[i][j]==q) cout<<SAVER[i]<<endl;
			j++;
		}
	}
	return 0;
}
