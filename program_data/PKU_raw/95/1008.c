
int main()
{
	int str1len,str2len,i;
	char str1[101],str2[101];
	cin.getline(str1,101);
	cin.getline(str2,101);
	str1len=strlen(str1);
	str2len=strlen(str2);
	for(i=0;i<=str1len;i++)
	{
		if((int)str1[i]>=97)
		{
			str1[i]=(int)str1[i]-32;
		}
	}
	for(i=0;i<=str2len;i++)
		{
			if((int)str2[i]>=97)
			{
				str2[i]=(int)str2[i]-32;
			}
		}
	if(strcmp(str1,str2)==0) cout<<"=";
	if(strcmp(str1,str2)==-1) cout<<"<";
	if(strcmp(str1,str2)==1) cout<<">";
	return 0;
}