
int main()
{
	char rank[6];
	int state[6] = {0}, i, r = 1;
	for (rank[1] = 'a'; rank[1] != 'e' + 1; rank[1]++)
	{
		for (rank[2] = 'a'; rank[2] != 'e' + 1; rank[2]++)
		{
			if (rank[1] == rank[2])
				continue;
			for (rank[3] = 'a'; rank[3] != 'e' + 1; rank[3]++)
			{
				if (rank[1] == rank[3] || rank[2] == rank[3])
					continue;
				for (rank[4] = 'a'; rank[4] != 'e' + 1; rank[4]++)
				{
					if (rank[1] == rank[4] || rank[2] == rank[4] || rank[3] == rank[4])
						continue;
					for (rank[5] = 'a'; rank[5] != 'e' + 1; rank[5]++)
					{
						if (rank[1] == rank[5] || rank[2] == rank[5] || rank[3] == rank[5] || rank[4] == rank[5])
							continue;
						state[1] = (rank[1] == 'e');
						state[2] = (rank[2] == 'b');
						state[3] = (rank[5] == 'a');
						state[4] = (rank[1] != 'c');
						state[5] = (rank[1] == 'd');
						if (rank[2] == 'e' || rank[3] == 'e')
							break;
						if (state[rank[1] - 'a' + 1] == 1 && state[rank[2] - 'a' + 1] == 1)
						{
								if (state[1] + state[2] + state[3] + state[4] + state[5] == 2)
								{
									for (i = 1; i != 6; i++)
									{
										if (rank[i] == 'a')
											cout << i << " ";
									}
									for (i = 1; i != 6; i++)
									{
										if (rank[i] == 'b')
											cout << i << " ";
									}
									for (i = 1; i != 6; i++)
									{
										if (rank[i] == 'c')
											cout << i << " ";
									}
									for (i = 1; i != 6; i++)
									{
										if (rank[i] == 'd')
											cout << i << " ";
									}
									for (i = 1; i != 6; i++)
									{
										if (rank[i] == 'e')
											cout << i;
									}
									r = 0;
									break;
								}
						}
					}
					if (r == 0)
						break;
				}
				if (r == 0)
					break;
			}
			if (r == 0)
					break;
		}
		if (r == 0)
					break;
	}

	return 0;
}





