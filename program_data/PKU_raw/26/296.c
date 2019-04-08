int main()
{
	char str[101];
	int i,j,k=0;
	cin.getline(str,101);
	char *p=NULL;
	p=str;
	for(i=0;i<strlen(str);i++)
	{
		if(*(p+i)==' '&&*(p+i+1)==' ')
		{
			for(j=i+1;j<strlen(str)-1;j++)
				*(p+j)=*(p+j+1);
			i--;
			k++;
		}
	}
	for(i=0;i<strlen(str)-k;i++)
	    cout<<str[i];
	return 0;
}

			
