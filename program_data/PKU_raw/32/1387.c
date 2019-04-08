// ?????.cpp : ??????????????
//
int main()
{
	int n,j,len,len2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char A[101],B[101],C[101],D[101];
		cin.getline(D,100);
		cin.getline(A,100);
        cin.getline(B,100);
		len=strlen(A);
for(j=0;2*j<len;j++)
		{
			char k;
			k=A[j];
			A[j]=A[len-j-1];
			A[len-j-1]=k;
		}
		len2=strlen(B);
		for(j=0;2*j<len2;j++)
		{
			char k;
			k=B[j];
			B[j]=B[len2-j-1];
			B[len2-j-1]=k;
		}
	    for(j=len2;j<len;j++)B[j]='0';
		B[j]=0;
		for(j=0;j<len;j++)
		{
			C[j]=(int)A[j]+'0'-(int)B[j];
			if(C[j]<'0')
			{
			A[j+1]--;
			C[j]+=10;
			}
		}
		for(j=len-1;j>0&&C[j]=='0';j--);
		for(;j>=0;j--)cout<<C[j];cout<<endl;
	}
	return 0;
}

