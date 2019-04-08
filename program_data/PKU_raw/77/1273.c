//shu ru fa huai le bu xie zhu shi le = =!
int main()
{
	char str[100];
	cin.getline(str,101);
	int i,j,k,t=0;
	int number[51][2];
	int n=0;
	while(true)
	{
		if(str[n]=='\0')
			break;
		n++;
	}
	for(i=0;i<n-1;i++)
	{
		if(str[0]=='\0')
			break;
		if(str[i]==str[0])
		{
			for(j=i+1;j<n;j++)
			{
				if(str[j]!=str[0])
				{
					for(k=j;k>=0;k--)
					{
						if(str[k]==str[0])
							break;
					}
					str[j]=str[k]='\0';
					number[t][0]=k;
					number[t++][1]=j;
				}
			}
		}
	}
	int d;
	for(i=0;i<t-1;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(number[i][1]>number[j][1])
			{
				d=number[i][1];number[j][1]=number[i][1];number[i][1]=d;
				d=number[i][0];number[j][0]=number[i][0];number[i][0]=d;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		cout<<number[i][0]<<" "<<number[i][1]<<endl;
	}
	return 0;
}