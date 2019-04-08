int main()
{
	char str[1000];
	char a[50];
	char b[50];
	cin.getline(str,1000);
	cin.getline(a, 50);
	cin.getline(b,50);
	int i, j;
	for (i = 0; str[i] != '\0'; i ++)
	{
		int  len = 0, k;
		for (j = 0; a[j] != '\0'; j ++)
	       if(str[i + j] == a[j]  && (str[i - 1]==' '&& i!=0)||i == 0)
			   len ++;
		if (len == strlen(a) && (str[i + j] == ' '|| str[i + j] == '\0'))
		{
			if (strlen(a) >= strlen(b))
			{
				for (k = 0; k < strlen(b); k ++)
					str[i + k] = b[k];
				for (k = i + strlen(b); str[k]!='\0'; k ++)
					str[k] = str[k + strlen(a) - strlen(b)];
			}
			else
			{
				for (k = strlen(str)+ strlen(b) - strlen(a);k >= i + strlen(a);  k --)
					str[k] = str[k + strlen(a) - strlen(b)];
				for (k = 0; k < strlen(b); k ++)
					str[i + k] = b[k];
				i += strlen(b);
			}
            
				
		}
	}
	cout << str << endl;
	return 0;
}
