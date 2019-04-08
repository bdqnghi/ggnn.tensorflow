//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


void putout(int a[200][200],int num)
{
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
			cout<<setw(3)<<a[i][j];
		cout<<endl;
	}
}

void cut1 (int a[200][200],int b,int num)//????????
{
	int a1[200][200];
	memcpy(a1,a,40000);
	for(int i=num-2;i>=0;i--)
		a1[b][i]=min(a1[b][i],a1[b][i+1]);
	for(int i=0;i<num;i++)
		a[b][i]-=a1[b][0];
}

void cut2 (int a[200][200],int b,int num)//????????
{
	int a1[200][200];
	memcpy(a1,a,40000);
	for(int i=num-2;i>=0;i--)
		a1[i][b]=min(a1[i][b],a1[i+1][b]);
	for(int i=0;i<num;i++)
		a[i][b]-=a1[0][b];
}

int remain(int a[200][200],int num,int out)//????????????????????out
{
	for(int i=0;i<num;i++)//??????
		cut1(a,i,num);
	for(int i=0;i<num;i++)//??????
		cut2(a,i,num);
	out=out+a[1][1];//??a[1][1]
	for(int i=1;i<num-1;i++)//?????
		for(int j=0;j<num;j++)
			a[i][j]=a[i+1][j];
	for(int i=1;i<num-1;i++)//?????
		for(int j=0;j<num-1;j++)
			a[j][i]=a[j][i+1];
	num--;//?????
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
		int a[200][200];//??a[100][100]
		memset(a,0,40000);
		for(int i=0;i<n;i++)//????
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int p=remain(a,n,0);//??a[1][1]??
		cout<<p<<endl;
	}
	return 0;
}
