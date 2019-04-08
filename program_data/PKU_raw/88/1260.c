
int main()
{   
	char str[31];
	gets(str);

	char * p=str;


	int flag=0;
	while(p<str+strlen(str))
	{
		if((*p>='0')&&(*p<='9'))
			{
				cout<<*p;
				flag=1;
		    }
		else
			{  
				if(flag==1)
				   cout<<endl;
				flag=0;
		     }
		p++;
	}

	return 0;
}