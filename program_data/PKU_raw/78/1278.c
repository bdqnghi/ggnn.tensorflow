/**
* @file 1000010424_3.cpp
* @author ???
* @date 2010?11?20
* @description
* ??????: ???
*/



int main()
{
	char name[4] = {'z', 'q', 's', 'l'};					//???????
	int weight[4];											//?????????????????
	int i;

	for(weight[0] = 10; weight[0] <= 50; weight[0] += 10)
		for(weight[1] = 10; weight[1] <= 50; weight[1] += 10)
			if(weight[1] != weight[0])
				for(weight[2] = 10; weight[2] <= 50; weight[2] += 10)
					if(weight[2] != weight[1] && weight[2] != weight[0])
						for(weight[3] = 10; weight[3] <= 50; weight[3] += 10)
							if(weight[3] != weight[2] && weight[3] != weight[1] && weight[3] != weight[0])
								if((weight[0] + weight[1] == weight[2] + weight[3]) && 
									(weight[0] + weight[3] > weight[2] + weight[1]) && 
									(weight[0] + weight[2] < weight[1]))
								//????????????
								{
									for(i = 0; i < 4 && weight[i] != 50; i++)
										;

									if(i != 4)
										cout << name[i] << ' ' << weight[i] << endl;

									for(i = 0; i < 4 && weight[i] != 40; i++)
										;

									if(i != 4)
										cout << name[i] << ' ' << weight[i] << endl;

									for(i = 0; i < 4 && weight[i] != 30; i++)
										;

									if(i != 4)
										cout << name[i] << ' ' << weight[i] << endl;

									for(i = 0; i < 4 && weight[i] != 20; i++)
										;

									if(i != 4)
										cout << name[i] << ' ' << weight[i] << endl;

									for(i = 0; i < 4 && weight[i] != 10; i++)
										;

									if(i != 4)
										cout << name[i] << ' ' << weight[i] << endl;
								}
	return 0;
}