char Boy,Girl;
char queue[100];
int FindPartner(int i)
{
	if(queue[i+1]==Girl)
	{
		cout<<i<<' '<<i+1<<endl;
		return i+1;
	}
	else
	{
		int pnt=i;
		while(queue[pnt+1]==Boy)
		{
			pnt=FindPartner(pnt+1);
		}
		cout<<i<<' '<<pnt+1<<endl;
		return pnt+1;
	}
}
int main()
{
	cin>>queue;
	int l=strlen(queue);
	Boy=queue[0];
	Girl=queue[l-1];
	FindPartner(0);
	return 0;
}