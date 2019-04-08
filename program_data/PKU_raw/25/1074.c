int main ( )
{
	int N, i, j, t = 0, exp[1000] = {2, 0};
	cin >> N;
	if(N==0)
		cout <<1<<endl;
	else
	{
	for(i = 1;i < N;i++)
	{
		t = 0;
		for(j = 0;;j++)
		{

		    if(exp[j+1]==0 && exp[j+2]==0 && exp[j+3]==0)
			{
				exp[j] = 2*exp[j]+t;
				t = exp[j]/10;
				exp[j] = exp[j] - 10*t;
				exp[j+1] = t;
				break;
			}
			else
			{
			if(j==0)
			{
				t = 2*exp[j]/10;
			    exp[j] = 2*exp[j] - 10*t;                                                                                                                                                                                                                                                                 
			}
			else
			{

				exp[j] = 2*exp[j]+t;
				t = exp[j]/10;
				exp[j] = exp[j] - 10*t;
			}
			}
		}
	}
	for(i = 999;i >= 0;i--)
	{
		if(exp[i]!=0)
			break;
	}
	for(;i >=0;i--)
	{
		cout << exp[i];
	}
	}
	return 0;
}