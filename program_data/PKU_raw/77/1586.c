char a[100];
int counter;
int line[100];
void out(int l)
{
	int record;
	if (counter==0)
	{return;}
	for (int i=0;i<l;i++)
	{
		if (line[i]==1)
		{
			record=i;
			continue;
		}
		if (line[i]==0)
		{
			line[record]=-1;
			line [i]=-1;
			cout<<record<<' '<<i<<endl;
			counter-=2;
			out(l);
			break;
		}
	}
}

int main()
{ 
	cin.getline(a,100);
	char boy=a[0];
	int len=strlen(a);
	counter=len;
	for (int i=0;i<len;i++)
	{
		if (a[i]==boy)
		{line[i]=1;}
		else
		{line[i]=0;}
	}
	out(len);
	return 0;
}