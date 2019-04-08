int main()
{
	char word[100][100]={0};
	int i=0;
	int j=0;
	char x;
	x=getchar();
	do
	{
		if(x==' ') i++,j=0;
	    else word[i][j]=x,j++;
		x=getchar();
	}while(x!='\n');
	for(int k = i ; k >= 0 ; k--)
	{
		if(k==0)cout<<word[k]<<endl;
		else cout<<word[k]<<" ";
	}
	return 0;
}
