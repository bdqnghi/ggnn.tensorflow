struct Letter
{	
	char letter;
	int time;
}Z[100],S;
int main()
{
	char str[300];
	int i,j=0,t,n,m=0,ge;
	gets(str);
	n=strlen(str);
	for(i=0;i<100;i++)
	{
		Z[i].time=0;
	}
	for(i=0;i<n;i++)
	{
		for(t=0;t<100;t++)
		{
			if(str[i]==Z[t].letter)
			{
				Z[t].time++;
				m++;
				break;
			}
		}
		if(m==0&&(((str[i]>64)&&(str[i]<91))||((str[i]>96)&&(str[i]<123))))
		{
			Z[j].letter=str[i];
			Z[j].time++;
			j++;
		}
		else
			m=0;
	}
	ge=j-1;
	if(ge==-1)
		printf("No");
	else
	{
		for(i=0;i<ge-1;i++)
		{
			for(j=0;j<ge-i;j++)
			{
				if(Z[j].letter>Z[j+1].letter)
				{	
					S=Z[j];
					Z[j]=Z[j+1];
					Z[j+1]=S;
				}
			}
		}
		for(i=0;i<=ge;i++)
		{
			printf("%c=%d\n",Z[i].letter,Z[i].time);
		}
	}
	return 0;
}