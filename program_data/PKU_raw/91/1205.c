
int main ()
{
	int i;
	char s[101],s1[101];
	cin.getline (s,101);
	for (i=0;s[i]!='\0';i++)
	{
		s1[i]=(char)((int)s[i]+(int)s[i+1]);
	}
	s1[i-1]=(char)((int)s1[i-1]+(int)s[0]);
	s1[i]='\0';
	cout <<s1<<endl;

	return 0;
}