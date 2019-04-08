int main()
{
	char str[14],substr[4];
	while(cin>>str>>substr){
		int i,j,k = 0,len = strlen(str);
		char max = 1;
		for(i = 0;i < len;i++)
			if(max < str[i])
				max = str[i];
		for(j = 0;j < len;j++)
			if(max == str[j])
				break;
		for(i = len + 2;i > j + 3;i--)
			str[i] = str[i - 3];
		str[len + 3] = '\0';
		for(i = j + 1;i < j + 4;i++)
			str[i] = substr[k++];
		cout<<str<<endl;
	}
	return 0;
}