int i=0;
char boy,girl;
void search(char a[])
{
	int j=0,k,bo,gi;
	if(a[0]!='.')
	{
		while(a[j]!=girl)
			j++;
		k=j-1;
		gi=j;
		a[gi]='.';
		while(a[k]=='.')
			k--;
		a[k]='.';
		bo=k;
		cout<<bo<<" "<<gi<<endl;
		search(a);
	}
}
int main()
{
	char a[100];
	cin.getline(a,100);
	while(a[i]!='\0')i++;
	boy=a[0];
	girl=a[i-1];
	search(a);
	return 0;
}