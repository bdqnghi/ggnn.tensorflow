int main()
{
	char cha[300],chb[300];
	int a[300],b[300];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>cha>>chb;
	int i,j,k=0,lena,lenb;
	lena = strlen(cha);
	lenb = strlen(chb);
	for(i=lena-1;i>=0;i--)
		a[k++] = cha[i] - 48;
	k=0;
	for(i=lenb-1;i>=0;i--)
		b[k++] = chb[i] - 48;
	for(i=0;i<300;i++)
		a[i] += b[i];
	for(i=0;i<300;i++)
		if(a[i]>=10)
		{
			a[i] -= 10;
			a[i+1]++;
		}
	j=299;
	while(a[j]==0 && j>0) j--;
	for(i=j;i>=0;i--)
		cout<<a[i];
	cout<<endl;
	return 0;
}






	


	

		

