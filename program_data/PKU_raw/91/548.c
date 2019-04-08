//*************************************************************
//*                  ???????????                   *
//*                  ?????1000010573                     *
//*                  ?????2010?12?                     *         
//*************************************************************


int main()               //??? 
{
	char in[111],out[111];
	cin.getline(in,111);
	int lenin;
	lenin = strlen(in);
	for(int i = 0 ; i < lenin ; i++)
	{
		out[i] = in[i%lenin] + in[(i+1)%lenin];
	}
	for(int j = 0 ; j< lenin ; j++)
	{
		cout<<out[j];
	}

       return 0; 
}

