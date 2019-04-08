int main()
{
	int k;
	char input[81];
	cin >>k;
	cin.get();
	while (k>0)
	{
		cin.getline(input,81);
		int i=1,leg=0;
	    if (input[0]=='_'||(input[0]>='a'&&input[0]<='z')||(input[0]>='A'&&input[0]<='Z'))
	      leg=1;
	    while (input[i]!=0)
	    {
		  if (leg==0) break;
		  else if ((input[i]>='a'&&input[i]<='z')||(input[i]>='A'&&input[i]<='Z')||(input[i]>='0'&&input[i]<='9')||input[i]=='_')
		        leg=1;
		  else leg=0;
		  i++;
	    }
		cout <<leg <<endl;
		k--;
	}

	return 0;
}
