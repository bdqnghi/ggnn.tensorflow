/*
 * ???: 1000010191_30_3.cpp
 * ??: ???
 * ????: 2010-11-5
 * ??: ????
 */


int main()
{
	char s[101],a[101],b[101],r[101]=""; //?????,r???
	cin.getline(s,101);
	cin.getline(a,101);
	cin.getline(b,101);
	char temp[101];
	int templen=0;
	for (int i=0;s[i];i++)
	{
		if (s[i]!=' ')
		{
			temp[templen]=s[i];
			templen++;
		}
		else
		{
			temp[templen]='\0';
			if (!strcmp(temp,a))
				strcat(r,b); //?????????
			else
				strcat(r,temp); //????????
			strcat(r," "); //????
			templen=0;
		}
	}
	temp[templen]='\0';
	if (!strcmp(temp,a))
		strcat(r,b); //?????????
	else
		strcat(r,temp); //????????
	cout<<r<<endl;
	return 0;
}
