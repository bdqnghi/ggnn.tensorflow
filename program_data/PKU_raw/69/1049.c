int main()
{
	char A[200],B[200];
	cin>>A>>B;
	int iA[200]={0},iB[200]={0};
	int iC[200]={0};
	char C[200]={0};
	for(int i=0;i<strlen(A);i++)
	iA[i]=(int)A[strlen(A)-1-i]-'0';
	for(int i=0;i<strlen(B);i++)
	iB[i]=(int)B[strlen(B)-1-i]-'0';
	int Lc=max(strlen(A),strlen(B));
	for(int i=0;i<Lc;i++)
	{
	iC[i]+=iA[i]+iB[i];
	iC[i+1]=iC[i]/10;
	iC[i]=iC[i]%10;
	}
	if(iC[Lc]!=0)
	Lc++;
	for(;Lc>=0;Lc--)
	{
		if(iC[Lc-1]!=0)
		break;
	}
	if(Lc==-1)
	cout<<'0';
	else
	{
	for(int i=0;i<Lc;i++)
	C[i]=iC[Lc-1-i]+'0';
	C[Lc]='\0';
	cout<<C<<endl;
	}
	return 0;
}