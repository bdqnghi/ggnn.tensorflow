void calc()
{ 	const int MAX_LEN = 200;
	int an1[MAX_LEN]; int an2[MAX_LEN];
	char seLine1[MAX_LEN + 1]; char seLine2[MAX_LEN + 1];
	//cout << "please input two integers" << endl;
	cin >> seLine1;
	cin >> seLine2;
	int nLen1 = strlen(seLine1);
	int nLen2 = strlen(seLine2);
	memset(an1, 0, sizeof(an1));
	memset(an2, 0, sizeof(an2));
	int i, j=0;
	for (i = nLen1-1;  i>=0; i--)
		an1[j++] = seLine1[i] - '0';
	j=0;
	for (i = nLen2-1; i>=0;i--)
		an2[j++] = seLine2[i] - '0';
	for (i = 0; i < nLen1 ;i++)
	{
	    //printf("%d\n", an1[i]);
		an1[i] -= an2[i];
		if(an1[i] < 0)
		{
			an1[i] +=10;
			an1[i + 1]--;
		}
	}
	i = nLen1 - 1;
	while(i > 0 && an1[i]==0) i--;
	//printf("%d\n", i);
	for(;i >= 0; i--)
		cout << an1[i];
	cout << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n --)
        calc();
}
