int main()
{
	char words[1002]={0};
	cin.getline(words,1001,'\n');
	int i,j; int count={0};
	for(i=0;words[i]!=0;i++)
	{  
		count=0;
		for(j=i;words[j]!=0;j++)
		{
			
			if(words[j]==words[i]||words[j]==(words[i]+'A'-'a')||words[i]==(words[j]+'A'-'a'))
				count++;
			else
			{
				
				break;
			}
		}
		i=j-1;
		//cout<<i<<endl;
		if(words[i]<='z'&&words[i]>='a')
			words[i]+='A'-'a';
		cout<<"("<<words[i]<<","<<count<<")";
	}
	return 0;
}