int main()
{
	int n,i;
	double cocktail1,cocktail2,cocktail,result;
	double extra1[10000],extra2[10000],extra[10000];
	cin>>n;
	cin>>cocktail1>>cocktail2;
	cocktail=cocktail2/cocktail1;
	for (i=0;i<n-1;i++)
	{
		cin>>extra1[i]>>extra2[i];
		extra[i]=extra2[i]/extra1[i];
	}

	for (i=0;i<n-1;i++)
	{
		result=extra[i]-cocktail;
		if (result>0.05)
		{
			cout<<"better"<<endl;
		}
		else if (result<(-0.05))
		{
			cout<<"worse"<<endl;
		}
		else if (result>=-0.05&&result<=0.05)
		{
			cout<<"same"<<endl;
		}
	}
	return 0;
}

