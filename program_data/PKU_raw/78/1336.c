int main()
{
	int w[4], i, j, flag = 0;
	char n[]={'z','q','s','l'};
	for(w[0] = 1; w[0] <= 5; w[0] ++)
	{
		for(w[1] = 1; w[1] <= 5; w[1] ++)
		{
			for(w[2] = 1; w[2] <= 5; w[2] ++)
			{
				for(w[3] = 1; w[3] <= 5; w[3] ++)
				{
				//	for(i = 0; i < 4; i++)
				//		for (j = i + 1; j < 4;j ++)
				//			if(w[i] == w[j]) flag = 1;
				//	if(flag == 1)
				//			continue;
					if((w[0] + w[1] == w[2] + w [3]) && (w[0] + w[3] > w[1] + w[2]) && (w[0] + w[2] < w[1]))
					{
						//cout << w[0] << w[1] << w[2] << w[3];
						for(i = 5; i >= 1;i--)
						{
							for (j = 0; j < 4; j++)
							{
								if(w[j] == i)
								cout << n[j] << ' ' << w[j] *10 << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}