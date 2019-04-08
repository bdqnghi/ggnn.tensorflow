int main()
{
	int i,j,a[101],m=0,l=0;
	char str[101];
	gets(str);
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==' '&&str[i+1]!=' ')
			{	a[m]=i+1;m++;}
			
		}    
		for(i=m-1;i>=0;i--)
		{
			for(j=a[i];str[j]!='\0'&&str[j]!=' ';j++)
			{
				cout<<str[j];
			}
			cout<<' ';
		}
		if(str[0]!=' ')
		{
		for(i=0;str[i]!='\0'&&str[i]!=' ';i++)
			cout<<str[i];
        }  
		return 0;
}