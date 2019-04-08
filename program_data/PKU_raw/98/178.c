
int main()
{
	int n,i,j,len;
	char word[500][81],text[500][81];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>word[i];
	for(i=80;word[n-1][i]==0;i--);
	for(;word[n-1][i]==' ';i--)
		word[n-1][i]=0;

	for(i=0;i<500;i++)
		for(j=0;j<81;j++)
			text[i][j]=0;
	len=0;
	j=0;
	for(i=0;i<n;i++)
	{
		if(strlen(word[i])+len<=80)
		{
			len+=strlen(word[i]);
			strcat(text[j],word[i]);
			if(len<80&&i<n-1)
			{
				text[j][len]=' ';
				len+=1;
			}
		}
		else 
		{
			if(text[j][len-1]==' ')
			text[j][len-1]=0;
			j++;
			len=0;
			i=i-1;
		}
	}

	for(i=0;text[i][0]!=0;i++)
		cout<<text[i]<<endl;
	return 0;
}