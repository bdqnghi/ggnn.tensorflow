int main()
{
	char a[200];
	cin.getline(a,200);
	int l,i,flag=0;
	l=strlen(a);
	for(i=0;i<l;i++)
		if(flag==0)
		{
			cout << a[i];
			if(a[i]==' ')
				flag=1;
		}
		else
			if(a[i]!=' ')
			{
				flag=0;
				i--;
			}
			cout << endl;
}
			
		
