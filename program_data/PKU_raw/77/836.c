// ???:??????
// ??:????
// ????:2011.11.20
void boy(int);
char a[100],ch;
int j=0,flag=0;

void boy(int i)
{
	do
	{
	if(flag==1)
		return;
	a[j]=cin.get();
	if(j==0)
		ch=a[j];
	if (a[j]==ch)
	{
		j++;
		boy(j-1);
	}
	else
	{
		cout<<i<<" "<<j<<endl;
		j++;
		if(i==0)
			flag=1;
		return;
	}
	}while(1);
}

int main()
{
	int i=0;
	boy(i);
	return 0;
}