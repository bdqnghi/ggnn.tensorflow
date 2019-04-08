//*************************
//*????????**
//*??????**
//*???2013.10.30**
//*************************
int main()
{
	int time[1050], in[1050], out[1050], i = 0, a = 0, n = 0;
	for(;i<=1049;i++)
	{
		time[i] = 0;
		in[i] = 0;
		out[i] = 0;
	}
	for(i = 0;;i++)
	{
		char a;
		cin>>in[i];
		a = cin.get();
		if(a != 44)
			break;
	}
	for(i = 0;;i++)
	{
		char b;
		cin>>out[i];
		b = cin.get();
		if(b != 44)
			break;
	}
	n = i + 1;
	for(i = 0;i <= 1000;i++)
	{
		for(int j = in[i]; j < out[i]; j++)
			{
				time[j]++;
		}
	}
for(int j = 0; j <= 1000 ; j++)                 
		for(int h = 0; h <=1000; h++)
			{
				if(time[h] < time[h+1])
				{
					int temp = time[h];
					time[h] = time[h+1];
					time[h+1] = temp;
				}
		}
		a = time[0];
	cout<<n<<" "<<a<<endl;
	return 0;
}