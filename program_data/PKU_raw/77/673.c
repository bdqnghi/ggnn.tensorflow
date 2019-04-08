int main()
{
	void match(char str[100],int b,int k,int bg[50][2]);
	char str[100];
	int bg[50][2];
	int i,j,total,len,temp;

	cin.getline(str,101,'\n');
	len=strlen(str);
	total=len/2;

	match(str,0,0,bg);
	
	for (i=1;i<total;i++)
		for (j=0;j<total-i;j++)
			if ( bg[j][1]>bg[j+1][1] )
			{
				temp=bg[j][1];
				bg[j][1]=bg[j+1][1];
				bg[j+1][1]=temp;

				temp=bg[j][0];
				bg[j][0]=bg[j+1][0];
				bg[j+1][0]=temp;
			}

	for (i=0;i<total;i++)
		cout << bg[i][0] << " " << bg[i][1] << endl;

	return 0;
}


void match(char str[100],int b,int k,int bg[50][2])
{
	char ch=str[0];
	int i,len=strlen(str);
	int m=1;					// m flags the match case of str[b]


	if (str[b]==ch)
	{
		for (i=b+1;i<len;i++)
		{
			if ( str[i]==ch )
				m++;
			else 
				m--;
			if (m==0)
			{
				bg[k][0]=b;
				bg[k][1]=i;
				k++;
				break;
			}
		}
	}
	
	b++;

	if (b!=len)
		match(str,b,k,bg);

}