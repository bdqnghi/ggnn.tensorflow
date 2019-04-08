void read();
void sort();
void connect();
void output();
int one,two,first[100],second[100];
int main()
{
	read();sort();connect();output();
	return 0;
}
void read()
{cin>>one>>two;
for(int i=0;i<one;i++)
cin>>first[i];
for(int i=0;i<two;i++)
cin>>second[i];
}
void sort()
{
	for(int i=0;i<one;i++)
		for(int j=0;j<one-i-1;j++)
			if(first[j]>first[j+1])swap(first[j],first[j+1]);
	for(int i=0;i<two;i++)
		for(int j=0;j<two-i-1;j++)
			if(second[j]>second[j+1])swap(second[j],second[j+1]);
}
void connect()
{
	for(int i=0;i<two;i++)
		first[one+i]=second[i];
}
void output()
{
	cout<<first[0];
	for(int i=1;i<one+two;i++)
		cout<<' '<<first[i];
}