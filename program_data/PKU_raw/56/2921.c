/*??????*/
int main()
{
	char num[6];
	int a;
	cin>>num;
	a=strlen(num);//???????
	int i,j;
	char t;
	for(i=0,j=a-1;i<=(a-1)/2;i++,j--)//????????
	{
		t=num[i];
		num[i]=num[j];
		num[j]=t;
	}
	for(i=0;i<a;i++)
	{
		cout<<num[i];
	}
	cout<<endl;
	return 0;
}