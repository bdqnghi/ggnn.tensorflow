int main()
{
	char sentence[100] ;
	int i ,len,flag[100]={0};
	cin.getline(sentence,100);
	len=strlen(sentence);
	for(i=0;i<len;i++)
		if (sentence[i]==' '&&sentence[i+1]==' ') flag[i+1]=1;
	for(i=0;i<len;i++)
		if(flag[i]==0) cout<<sentence[i];
	return 0 ;
}