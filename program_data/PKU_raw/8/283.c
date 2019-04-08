int main()
{
	int number1[100]={0},number2[100]={0};//????
	int len1=0,len2=0;
	cin>>len1>>len2;
	void getarray(int number[],int len);
	void rank(int number[],int len);
	void add(int number1[],int number2[],int len1,int len2);
	void print(int number[],int len1,int len2);
	getarray(number1,len1);//????????
	getarray(number2,len2);
	rank(number1,len1);         //??????????
	rank(number2,len2);
	add(number1,number2,len1,len2);//?????????
	print(number1,len1,len2);//????????
	return 0;
}
void getarray(int number[],int len)
{
	int i=0;
	for(i=0;i<len;i++)
		cin>>number[i];
}
void rank(int number[],int len)
{
	int i,j,temp;//i,j?????,temp?????
	for(i=0;i<len;i++)//??
	{
		for(j=i+1;j<len;j++)
		{
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
}
void add(int number1[],int number2[],int len1,int len2)
{
	int i=0;//i?????
	for(i=0;i<len2;i++)
		number1[i+len1]=number2[i];
}
void print(int number[],int len1,int len2)
{
	int i;
	for(i=0;i<len1+len2-1;i++)
		cout<<number[i]<<' ';
	cout<<number[len1+len2-1];
}