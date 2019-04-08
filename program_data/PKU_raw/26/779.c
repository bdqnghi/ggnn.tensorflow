
int main()
{   
	char a[101],*p_a=NULL;
	gets(a);
	p_a=a;
	

	int flag=1;

	while(p_a<(a+strlen(a)))
	{
		if(flag==1)
			{
				cout<<*p_a;
				if(*p_a==' ')
					flag=0;
				*p_a++;
				continue;
		   }
		else
		{
			if(*p_a!=' ')
			{
				flag=1;
				cout<<*p_a;
			}
				*p_a++;
				continue;
			
		}
	}
	cout<<endl;
			     
	return 0;
}
