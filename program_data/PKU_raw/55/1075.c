int power(int,int);
int main ()
{
	char number1[100],number2[100];
	int i,first,second,ten=0,l1,l2=0,remain;
	cin >> first ;
	cin.get();
	cin.getline(number1,100,' ');
	cin >> second;
	l1=strlen(number1);
	for (i=0;i<l1;i++)
	{
		if (number1[i]>='a'&&number1[i]<='z')
			ten=(number1[i]-'a'+10)*(int)(power(first,l1-i-1))+ten;
		if (number1[i]>='A'&&number1[i]<='Z')
			ten=(number1[i]-'A'+10)*(int)(power(first,l1-i-1))+ten;
		if (number1[i]>='0'&&number1[i]<='9')
			ten=(number1[i]-'0')*(int)(power(first,l1-i-1))+ten;
	}                                        //??????
	remain=ten;
	while (remain!=0)
	{
		remain=remain/second;
		l2++;
	}
	if (ten==0)
		l2=1;
	for (i=0;i<l2;i++)
	{
		number2[i]=ten/(int)(power(second,l2-i-1));
		ten=ten-number2[i]*(int)(power(second,l2-i-1));
		if (number2[i]>=10)
			number2[i]=number2[i]-10+'A';
		else
			number2[i]=number2[i]+'0';
	}
	number2[l2]='\0';
	cout << number2 << endl;
	return 0;
}
int power(int a,int b)
{
	int i,sum = 1;
	for(i = 1; i <= b; i++)
		sum = sum * a;
	return sum;
}
