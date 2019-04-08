int arr[1000000];
int brr[1000000];
int tot[1004];
int main()
{
	
	char a;
	int renshu=0,renshu1=0;
	char ch;
	while(1)
	{
		scanf("%d", &arr[renshu]);
		renshu++;
		ch=getchar();
		if(ch!=',')
			break;
	}
	while(1)
	{
		scanf("%d", &brr[renshu1]);	 
		renshu1++;
		ch=getchar();
		if(ch!=',')
			break;
	} 
	cout<<renshu<<" ";
    tot[0]=0;
	int i,j;
	for(i=1;i<=1000;i++)
	{
		for(j=0;j<renshu;j++)
		{
		   if(i>=arr[j] && i<brr[j])
			   tot[i]++;
		}
	}
    sort(tot,tot+1001);
	cout<<tot[1000]<<endl;
	return 0;
}