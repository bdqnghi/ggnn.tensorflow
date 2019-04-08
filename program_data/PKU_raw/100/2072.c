int main()
{
	char str[300];
	int i,j,count[300]={0},lon,t=0;
	gets(str);
	lon=strlen(str);
	for(i='A';i<='Z';i++)
		for(j=1;j<=lon;j++)
			if(str[j-1]==i)
				count[i-1]++;
	for(i='a';i<='z';i++)
		for(j=1;j<=lon;j++)
			if(str[j-1]==i)
				count[i-1]++;
	for(i=1;i<=300;i++)
		if(count[i-1]!=0)
		{
			t=1;
			break;
		}
		if(t==0)
			printf("No");
		else
			for(i=1;i<=300;i++)
				if(count[i-1]!=0)
					printf("%c=%d\n",i,count[i-1]);
}