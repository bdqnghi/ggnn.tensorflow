int main()
{
	char a[200],b[200];
	cin.getline(a,200);
	char *p=NULL;
	int flag=1,i=0;
	for(p=a;*p;p++)
	{   
		if(*p==' '&&flag==1)
			{
				flag=0;
				b[i++]=*p;
			}
		else if(*p==' '&&flag==0)
					;
		else 
		{
			flag=1;
			b[i++]=*p;
		}
	}
	b[i]='\0';
	cout<<b<<endl;
	return 0;
}
