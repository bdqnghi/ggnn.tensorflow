
// It's an ugly program
// solving a **** problem
int main()
{
	int w[4] = {0};
	char name[4] = {'z','q','s','l'};
	for(w[0] = 1; w[0] <= 5; w[0] ++)
		for(w[1] = 1; w[1] <= 5; w[1] ++) if(w[1] != w[0]) 
			for(w[2] = 1; w[2] <= 5; w[2] ++) if((w[2] != w[1]) && w[2] != w[0])
				for(w[3] = 1; w[3] <= 5; w[3] ++) if((w[3] != w[2]) && (w[3] != w[1]) && (w[3] != w[0]))
				{
					if((w[0] + w[1] == w[2] + w[3]) && (w[0] + w[3] > w[1] + w[2]) && (w[0] + w[2] < w[1]))
					{
						for(int k = 5; k > 0; k --)
							for(int i = 0; i < 4; i ++) if(w[i] == k)
								cout << name[i] << ' ' << w[i] * 10 << endl;
						return 0;
					}
				}
}	