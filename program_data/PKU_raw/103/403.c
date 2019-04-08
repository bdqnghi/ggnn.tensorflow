int main()
{
	char str[1100]={0};
	int i=0,j=0,c[1000][2]={0};//c[][0]??,c[][1]??
	cin.getline(str,1100,'\n');
	if(str[0]>='A'&&str[0]<='Z')
		c[0][0]=str[0];
	else
		c[0][0]=str[0]+'A'-'a';
	c[0][1]++;
	for(i=1;str[i]!=0;i++)
	{
		if(str[i]>='A'&&str[i]<='Z'&&str[i]==c[j][0]||str[i]+'A'-'a'==c[j][0])
			c[j][1]++;
		else
		{
			j++;
			if(str[i]>='A'&&str[0]<='Z')
				c[j][0]=str[i];
			else
				c[j][0]=str[i]+'A'-'a';
			c[j][1]++;
		}
	}
	for(i=0;i<=j;i++)
		cout<<'('<<(char)c[i][0]<<','<<c[i][1]<<')';

	return 0;
}