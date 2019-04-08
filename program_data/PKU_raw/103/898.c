int main()
{
	int i, l, num=0;
	char a[1000], temp;
	cin.getline(a, 1000, '\n');
	l=strlen(a);
	a[l]='\t';
	a[l+1]='\0';
	temp=a[0];
	for(i=0; a[i] != '\0';)
	{
		if(a[i] == temp || a[i]+32 == temp || a[i]-32 == temp)
		{
			i++;
			num++;
		}
		else
		{
			if(temp<97)
				cout << "(" << temp << "," << num << ")";
			else
				cout << "(" << (char)(temp-32) << "," << num << ")";
			temp=a[i];
			num=0;
		}
	}
	return 0;
}