int main()
{
	while(cin)
	{
		char str[11]={'\0'};
		char substr[4]={'\0'};
		char ansstr[14]={'\0'};
		char cmax=0;
		int point=0;
		cin>>str;
		cin>>substr;
		int length=strlen(str);
		for(int i=0;i<length;i++)
		{
			if(str[i]>cmax)
			{
				cmax=str[i];
				point=i;
			}
		}
		for(int i=0;i<point+1;i++)
			ansstr[i]=str[i];
		for(int i=point+1;i<point+4;i++)
			ansstr[i]=substr[i-point-1];
		for(int i=point+4,j=point+1;i<length+3,j<length;i++,j++)
			ansstr[i]=str[j];
		cout<<ansstr<<endl; 
	}
	return 0;
}