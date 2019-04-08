
int main()
{
	int n;
	cin >> n;
	int x=0,a=0,b=0,c=0,d=0;
	for (int i=1;i<=n;i++)
	{
		cin >> x;
		if (x<=18) a++;
		if (x>=19 && x<=35) b++;
		if (x>=36 && x<=60) c++;
		if (x>=61) d++;
	} 
	 cout<<fixed;
	 cout<< "1-18: "<< setprecision(2) << (double)a/n*100 << "%\n";
	 cout<<"19-35: "<< setprecision(2) << (double)b/n*100 << "%\n";
     cout<<"36-60: "<< setprecision(2) << (double)c/n*100 << "%\n";
     cout<<"60??: "<< setprecision(2) << (double)d/n*100 << "%\n";
	 return 0;
}

