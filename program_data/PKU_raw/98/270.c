int main()
{
	char words[2000][20],(*p)[20],*s,sumlen=0,len;
	int num;
	cin>>num;
	for(p=words;p-words<num;p++)
	{
		cin>>*p;
	}
	for(p=words;p-words<num;p++)
	{
		for(s=*p;*s!=0;s++);
		len=s-*p;
		if(sumlen+len+1<80)
		{
			if(sumlen==0)
			{
				cout<<endl;
				cout<<*p;
				sumlen+=len;
			}
			else
			{
				cout<<" "<<*p;
				sumlen+=(len+1);
			}
		}
		else
		{
			if(sumlen+len+1==80)
			{
				sumlen=0;
				cout<<" "<<*p;
			}
			else
			{
				sumlen=0;
				p--;
			}
		}
	}
	return 0;
}