int main()
{
	char	num1[300], num2[300];
	int	l1, l2;
	int	i, j, k;
	int	sum[300] = {0};		
	while(1)
	{
		cin.getline(num1,300);
		cin.getline(num2,300); 
		l1 = strlen(num1);
		l2 = strlen(num2);
		
		if(num1[0] == '\0'){break;}
		if(l1 < l2)
		{
			char	huan[300];		
			strcpy(huan, num1);
			strcpy(num1, num2);
			strcpy(num2, huan);
			int	k;
			k = l1, l1 = l2, l2 = k;
		}
		
		//??
		for (i = l1 - 1; i >= 0; i --)
		{
			num1[i + 1] = num1[i];
		}
		for (i = l2 - 1; i >= 0; i --)
		{
			num2[i + l1 - l2 + 1] = num2[i];
		}


		num1[0] = '0';
		for (i = 0; i <= l1 - l2; i ++)
		{num2[i] = '0';}//?????0 
		
		//??? (?????????????)
		for (i = l1; i >= 0; i --)
		{
			int	n1, n2;
			n1 = (int)(num1[i] - '0');
			n2 = (int)(num2[i] - '0');
			sum[i] = n1 + n2;
		}//?sum 
		for (i = l1; i >= 0; i --)
		{
			if(sum[i] > 9)
			{
				sum[i - 1] ++;
				sum[i] = sum[i] - 10;
			}
		}//?? 
				
		
		//??
		for (i = 0; i <= l1; i ++)
		{
			if(sum[i] == 0)
			{continue;}
			else
			{break;}
		}//????0??? (?????????????????)
		
		if(i == l1 + 1)
		{
			cout << "0" << endl; 
		}
		else
		{
			for (j = i; j <= l1; j ++)
			{
				cout << sum[j];
			}
			cout << endl; 
		}

	}
return 0;
}
