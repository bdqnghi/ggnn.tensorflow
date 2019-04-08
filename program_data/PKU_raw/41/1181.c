

int main()
{
	int ran[6];
	int com[6];
	int cor[6];
	int i, j;

	for(ran[1] = 1; ran[1] <= 5; ran[1] ++)
	for(ran[2] = 1; ran[2] <= 5; ran[2] ++)
	for(ran[3] = 1; ran[3] <= 5; ran[3] ++)
	for(ran[4] = 1; ran[4] <= 5; ran[4] ++)
	{
		ran[5] = 15 - ran[1] - ran[2] - ran[3] - ran[4];

		if(ran[1] * ran[2] * ran[3] * ran[4] * ran[5] == 120)
		{
			for(i = 1; i <= 5; i ++)
				cor[ran[i]] = i;

			com[1] = ran[5] == 1;
			com[2] = ran[2] == 2;
			com[3] = ran[1] == 5;
			com[4] = ran[3] != 1;
			com[5] = ran[4] == 1;
			
			if(ran[5] != 2 && ran[5] != 3)
			if(com[cor[1]] == 1 && com[cor[2]] == 1 && com[1] + com[2] + com[3] + com[4] + com[5] == 2)
			{
				cout << ran[1] << " " << ran[2] << " " << ran[3]
						<< " " << ran[4] << " " << ran[5] << endl;

				break;
			}
			
		}
	}

	return 0;
}

