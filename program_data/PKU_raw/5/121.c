char sen[100][500], ori, final, temp;
int main()
{
	int n, m, temp1, temp2, i, j, a, b, k, c, d, e;
	int sz[100];
	double f, g;
	a=0;
	d=0;
	scanf("%lf", &f);
	scanf("%s%s", sen[0], sen[1]);
	for(i=0; i<2&&d==0; i++)
	{
		for(j=0; j<strlen(sen[i])&&d==0; j++)
		{

			if(sen[i][j]!='A'&&sen[i][j]!='T'&&sen[i][j]!='C'&&sen[i][j]!='G')
				d=1;
		}
	}
	if(d==0){
	if(strlen(sen[0])==strlen(sen[1]))
	{
		for(i=0; i<strlen(sen[0]); i++)
			{
				if(sen[0][i]==sen[1][i])
					a++;
			}
			g=1.0*a/strlen(sen[0]);
			if(g>=f)
				printf("yes");
			else
				printf("no");
	}
	else
		printf("error");
	}
	else
		printf("error");
	return 0;
}


