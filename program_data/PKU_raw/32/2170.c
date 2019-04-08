
int num1[101],num2[101];
char char1[101],char2[101];

int main()
{
	int n,i,j;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=100;j++) {num1[j]=0;num2[j]=0;}
		cin>>char1>>char2;
		int len1,len2;
		for (len1=0;char1[len1]!='\0';len1++);
		for (len2=0;char2[len2]!='\0';len2++);

		for (j=1;j<=len1;j++)
			num1[j]=char1[len1-j]-48;
		for (j=1;j<=len2;j++)
			num2[j]=char2[len2-j]-48;

		for (j=1;j<=len1;j++)
			num1[j]=num1[j]-num2[j];

		for (j=1;j<=len1;j++)
		{
			if (num1[j]<0) {num1[j]=num1[j]+10;num1[j+1]--;}
		}
		int flag=0;
		for (j=0;j<len1;j++)
		{
			if (num1[len1-j]!=0)
				flag=1;
				cout<<num1[len1-j];
		}
		if (flag==0) cout<<0;
		if (i!=n) cout<<endl;
	}
	return 0;
}
