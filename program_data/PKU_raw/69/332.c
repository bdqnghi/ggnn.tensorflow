
int main()
{   
	char a1[251],a2[251];
	int  b1[251],b2[251];
	memset(b1,0,sizeof(b1));
	memset(b2,0,sizeof(b2));

	cin.getline(a1,251);
	cin.getline(a2,251);
    int l1=strlen(a1),l2=strlen(a2);

	int i,j;
	for(i=0,j=l1-1;j>=0;i++,j--)
		b1[i]=a1[j]-'0';
	for(i=0,j=l2-1;j>=0;i++,j--)
		b2[i]=a2[j]-'0';

	for(i=0;i<=250;i++)
	{
		b1[i]+=b2[i];
		if(b1[i]>=10)
		{
				b1[i]=b1[i]%10;
				b1[i+1]++;
		}
	}

	i=250;
	while(b1[i]==0)
	{
		i--;
		if(i==0)
			break;
	}

	for(;i>=0;i--)
		cout << b1[i];
	cout << endl;
	return 0;
}

