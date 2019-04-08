int qm[102],bp[102],lw[102];
char bg[102]={'\0'},xb[102]={'\0'};
int yuanshi(int i)
{
	if(qm[i]>80&&lw[i]>0) return 8000;
		else return 0;
}
int wusi(int i)
{
	if(qm[i]>85&&bp[i]>80) return 4000;
		else return 0;
}
int youxiu(int i)
{
	if (qm[i]>90 ) return 2000;
		else return 0;
}
int xibu(int i)
{
	if(qm[i]>85&&xb[i]=='Y') return 1000;
		else return 0;
}
int banji(int i)
{
	if( bp[i]>80 && bg[i]=='Y') return 850;
		else return 0;
}

int main()
{
	int i,n,max,num,jxj[102]={0},sum=0;
	char name[102][21]={'\0'};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>name[i]>>qm[i]>>bp[i]>>bg[i]>>xb[i]>>lw[i];
		jxj[i]=yuanshi(i)+wusi(i)+youxiu(i)+xibu(i)+banji(i);
	}
	max=jxj[1]; num=1,sum=jxj[1];
	for(i=2;i<=n;i++)
	{
		sum=sum+jxj[i];
		if (jxj[i]>max)
		{
			max=jxj[i];
			num=i;
		}
	}
	cout<<name[num]<<endl<<jxj[num]<<endl<<sum<<endl;
	return 0;
}