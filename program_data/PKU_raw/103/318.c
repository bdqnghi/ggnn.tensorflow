



int main()
{
	int m,k;

	int i,j;

	int count=1;

	char me[1001];
	int mem[1001]; 

	char s[1001];
	cin.getline(s,sizeof(s));

	memset(mem,0,sizeof(mem));

	j=1;
	me[1]=s[0];



	for(i=0;s[i]!=0;i++)
	{

		if(s[i]==me[j] || s[i]-'a'==me[j]-'A'|| s[i]-'A'==me[j]-'a')
		{
			mem[j]++;
		}
		else{
			j++;
		me[j]=s[i];
		mem[j]++;
		count++;
		}
	}

	for(i=1;i<=count;i++)
	{
		if(me[i]>='a' && me[i]<='z')
		{
			me[i]=me[i]-'a'+'A';
		}
	}

	
	for(i=1;i<=count;i++)
	{
		cout<<"("<<me[i]<<","<<mem[i]<<")";
	}



		
	
	
	
	
	




	return 0;
}