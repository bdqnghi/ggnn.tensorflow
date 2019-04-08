int main()
{
	char s[101]={0},s1[101]={0};
	int i,j;
	cin.getline(s,101);
	for(i=0;i<strlen(s)-1;i++)
		{
			s1[i]=s[i]+s[i+1];
	    } 
	s1[strlen(s)-1]=s[0]+s[i];
	for(i=0;i<strlen(s);i++)
	{
		cout<<s1[i];
	}
	return 0;
}