int main ()
{
	char word[200][20]={'\0'};
	int len[200];
	int i,j,v=0,max,min;
	char c;
	for(i=0,j=0;(c=getchar())!='\n';)
	{
		if(c==' '||c==',')
		{
			if(v==1)
			{
				len[i]=j;
				i++;
				j=0;
				v=0;
			}
		}
		else
		{
			v=1;
			word[i][j]=c;
			j++;
		}
	}
	len[i]=j;
	max=len[0];
	min=len[0];
	for(i=0;word[i][0]!='\0';i++)
	{
		if(len[i]>max)
			max=len[i];
		if(len[i]<min)
			min=len[i];
	}
	for(i=0;word[i][0]!='\0';i++)
	{
		if(len[i]==max)
		{	printf("%s\n",word[i]);
		break;}
	}

	for(i=0;word[i][0]!='\0';i++)
	{
		if(len[i]==min)
		{	printf("%s\n",word[i]);
		break;}
	}

	return 0;
}