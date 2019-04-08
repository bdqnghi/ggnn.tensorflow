
void arrange(char w[20]);

void main()
{
	char w1[20] = {0};
        char w2[20] = {0} ;
/*	while (scanf("%s%s",w1,w2)!=EOF)
	{*/
	scanf("%s%s",w1,w2);	
	arrange(w1);
		arrange(w2);
		if (strcmp(w1,w2))
			printf("NO\n");
		else
			printf("YES\n");
	/*}*/
}

void arrange(char w[20])
{
	int i,j;
	char c;
	for (i=19;i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (w[j]<w[j+1])
			{
				c=w[j];
				w[j]=w[j+1];
				w[j+1]=c;
			}
		}
	}
}