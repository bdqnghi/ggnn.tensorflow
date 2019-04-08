
int main()
{
	char syx[80], zxq[80];
	int i, t1, t2, t;
	gets(syx);
	gets(zxq);
	t1 = strlen(syx);
	t2 = strlen(zxq);
	t = (t1>t2)?t1:t2;
	for(i=0;i<t;i++)
	{
		if (syx[i] < 96)
		{
			syx[i] = syx[i] + 32;
		}
		if (zxq[i] < 96)
		{
			zxq[i] = zxq[i] + 32;
		}
	}
	if (strcmp(syx, zxq) > 0)
		printf(">\n");
	else if (strcmp(syx, zxq) < 0)
		printf("<\n");
	else
		printf("=\n");
		
	return 0;
}