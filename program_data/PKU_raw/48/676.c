int main()
{
	int dish[9][9]={0},temp[9][9]={0},i=0,j=0,n=0,m=0;
	cin>>m>>n;
	dish[4][4]=m;
	int *p=dish[0],*q=temp[0];
    for(i=0;i<n;i++)
	{
		for(j=0;j<81;j++,p++,q++)
		{
			if(*p!=0)
			{
				*q+=2**p;
				*(q-1)+=*p;*(q+1)+=*p;
				*(q-9)+=*p;*(q+9)+=*p;
				*(q-10)+=*p;*(q+10)+=*p;
				*(q-8)+=*p;*(q+8)+=*p;
			}
		}
		p=dish[0];q=temp[0];
		for(j=0;j<81;j++,p++,q++)
		{
			*p=*q;
			*q=0;
		}
		p=dish[0];q=temp[0];
	}
	for(i=0;i<81;i++)
	{
		if((i+1)%9==0)cout<<*(p+i)<<endl;
		else cout<<*(p+i)<<" ";
	}
	return 0;
}