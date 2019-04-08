char s1[10] = {'\0'},s2[10]={'\0'};
char out[10] = {'\0'};
int used[10] ={0},length=0,x=0,sum=0;
void ranker(int n)
{
	for (int i=0;i<length;i++)
	{
		if (!used[i])
		{
			out[n]=s1[i];
			used[i]=1;
			ranker(n+1);
			used[i] = 0;
		}
	}
	if (n==length-1) 
	{
		if (strcmp(out,s2)==0)
			x=1;
		else
			x=0;
		sum=sum+x;
	}
}
int main()
{
	cin>>s1>>s2;						//???????
	int i;
	for (i=0;i<10;i++)
		if (s1[i]!='\0')
			length++;
	ranker(0);							//????????
	if (sum!=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}