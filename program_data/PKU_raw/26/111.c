int main()
{
	int i,l,j;
    char x[101];
	cin.get(x,100);
	l=strlen(x);
	for(i=0;i<100;i++)
	{
		if(x[i]==32&&x[i+1]==32)
		{
			for(j=i;j<=100;j++)
			{
				x[j]=x[j+1];
			}
			i--;
		}
	}

    cout<<x;

    return 0;
}
