int main()
{
	int i=0,l,flag;
	char c[31];
	cin.getline(c,31);
	for(i=0;;i++)
		if(c[i]=='\0')
			break;
	l=i;
	char *a=c;
	for(i=0;i<l;i++)
		if(*(a+i)>='0'&&*(a+i)<='9')
			{
				cout << *(a+i);
				flag=0;
			}
		else
			if(flag==0)
				{
					cout << endl;
					flag=1;
				}
	return 0;
}

