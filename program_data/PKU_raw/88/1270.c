int main()
{
	int flag;                      /*????*/
	char a[40];                    /*?????*/
	char *p;                       
	gets(a);                       /*?????*/
	p=a;
	while(1)                       /*??????????*/
	{
		if(*p==NULL)                 
			break;
		if(*p>='0'&&*p<='9')       /*????*/
		{
			cout<<*p++;
			flag=1;
		}
		else if(flag==1)           /* ??????????*/
		{
			cout<<endl;
		    p++;
			flag=0;
		}
		else                       /*????????*/
			p++;
	}
	cout<<endl;
	return 0;
}

