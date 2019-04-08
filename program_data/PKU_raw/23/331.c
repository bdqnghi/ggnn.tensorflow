int main(void)
{
		char c,a[101][101];
	int i=1,j=0;
	while(1)
	{
		cin.get(c);
		if(c!=32&&c!=10)
		{
			a[i][j]=c;
			j++;
		}
		else 
		{
			a[i][j]='\0';
			if(c==32)
			{
				i++;
				j=0;
			}
			else break;
		}
	}
	for(j=i;j>1;j--) cout<<a[j]<<" ";
	cout<<a[1];
}
