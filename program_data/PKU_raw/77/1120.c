

int main()
{
	char input[101],boy,girl;
	int dui[101]={0},i=1,j;
	cin.getline(input,101,'\n');
	boy=input[0];
	while(input[i]==boy)
		i++;
	girl=input[i];
	for(i=0;input[i]!=0;i++)
	{
		if(input[i]==boy)
			dui[i]=1;
		if(input[i]==girl)
			dui[i]=2;
	}
	for(i=0;dui[i]!=0;i++)
	{
		if(dui[i]==2)
		{
			for(j=i-1;dui[j]!=1;j--);
			cout<<j<<" "<<i<<endl;
			dui[j]=0;
			dui[i]=0;
		}
	}
	return 0;
}