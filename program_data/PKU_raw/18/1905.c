//============================================================================
// Name        : 2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


void putout(int a[N][N],int num)
{
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
			cout<<setw(3)<<a[i][j];
		cout<<endl;
	}
}

void cut1 (int a[N][N],int b,int num)//&#182;&#212;&#195;&#191;ò&#187;DD&#189;&#248;DD1éá&#227;
{
	int a1[N][N];
	memcpy(a1,a,N*N);
	for(int i=num-2;i>=0;i--)
		a1[b][i]=min(a1[b][i],a1[b][i+1]);
	for(int i=0;i<num;i++)
		a[b][i]-=a1[b][0];
}

void cut2 (int a[N][N],int b,int num)//&#182;&#212;&#195;&#191;ò&#187;áD&#189;&#248;DD1éá&#227;
{
	int a1[N][N];
	memcpy(a1,a,N*N);
	for(int i=num-2;i>=0;i--)
		a1[i][b]=min(a1[i][b],a1[i+1][b]);
	for(int i=0;i<num;i++)
		a[i][b]-=a1[0][b];
}

int remain(int a[N][N],int num,int out)//&#182;&#212;&#195;&#191;ò&#187;&#184;&#246;&#190;&#216;&#213;ó&#189;&#248;DD1éá&#227;oí&#207;&#251;&#188;&#245;?&#196;2ù×÷?&#172;2?&#188;&#198;&#203;&#227;out
{
	for(int i=0;i<num;i++)//&#182;&#212;&#195;&#191;ò&#187;DD1éá&#227;
		cut1(a,i,num);
	for(int i=0;i<num;i++)//&#182;&#212;&#195;&#191;ò&#187;áD1éá&#227;
		cut2(a,i,num);
	out=out+a[1][1];//à&#219;&#188;óa[1][1]
	for(int i=1;i<num-1;i++)//&#207;&#251;&#188;&#245;?ú&#182;tDD
		for(int j=0;j<num;j++)
			a[i][j]=a[i+1][j];
	for(int i=1;i<num-1;i++)//&#207;&#251;&#188;&#245;?ú&#182;táD
		for(int j=0;j<num-1;j++)
			a[j][i]=a[j][i+1];
	num--;//&#190;&#216;&#213;óéùò&#187;&#189;×
	if(num==1)
		return out;
	else
		return remain(a,num,out);
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a[N][N];//&#214;&#216;&#214;&#195;a[200][200]
		memset(a,0,N*N);
		for(int i=0;i<n;i++)//ê&#228;è&#235;&#190;&#216;&#213;ó
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int p=remain(a,n,0);//&#188;&#198;&#203;&#227;a[1][1]?&#196;oí
		cout<<p<<endl;
	}
	return 0;
}