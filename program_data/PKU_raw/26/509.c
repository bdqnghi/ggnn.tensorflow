int main()
{
	char s[101];
	int leng,i,j,sum=0;
	cin.getline(s,101);
	leng=strlen(s);
	for(i=0;i<leng-sum;i++)
		if(s[i]==' '&&s[i+1]==' ')
			{
				sum++;
				for(j=i;j<leng-sum;j++)
					s[j]=s[j+1];
				i=i-1;
			}
	for(i=0;i<leng-sum;i++)
		cout<<s[i];
	return 0;
}
