//****************************************
//*   ????                           *
//*   ??????                       *
//*   ?????2011?10?30?           *
//****************************************


int main()
{
	int n, i, j, numm, numf;
	double Height, Heightm[40], Heightf[40], p;
	char sex[7];
	cin >> n;//n??????
	numm = 0;//numm??????
	numf = 0;//numf??????
	for(i = 1; i <= n;i ++)
	{
		cin >> sex >> Height;
		if(strlen(sex) == 4)
		{
			numm ++;
			Heightm[numm] = Height;
		}
		else
		{
			numf ++;
			Heightf[numf] = Height;
		}
	}//??????,??????????????
	for(i = 1; i < numm;i ++)
	{
		for(j = i + 1;j <= numm; j ++)
		{
			if(Heightm[i] > Heightm[j])
			{
				p = Heightm[i];
				Heightm[i] = Heightm[j];
				Heightm[j] = p;
			}
		}
	}//??????,???????
	for(i = 1; i <= numm; i ++)
		cout << fixed << setprecision(2) << Heightm[i] << " ";
	for(i = 1; i < numf;i ++)
	{
		for(j = i + 1;j <= numf; j ++)
		{
			if(Heightf[i] < Heightf[j])
			{
				p = Heightf[i];
				Heightf[i] = Heightf[j];
				Heightf[j] = p;
			}
		}
	}//??????,???????
	for(i = 1; i <= numf; i ++)
	{
		if(i < numf)
			cout << Heightf[i] << " ";
		else
			cout << Heightf[i] << endl;
	}
	return 0;
}