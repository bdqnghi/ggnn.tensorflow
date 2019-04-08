
int main()
{
	char shu[6],temp;
	int i,Lshu;
	cin.getline(shu,6,'\n');
	Lshu=strlen(shu);
	for(i=0;i<Lshu/2;i++)
	{
		temp=shu[i];
		shu[i]=shu[Lshu-1-i];
		shu[Lshu-1-i]=temp;
	}
	cout<<shu;
	return 0;
}