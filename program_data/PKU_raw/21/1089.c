int main()
{
	int n,i,j;
	unsigned a[400]={0},result[400]={0};
	double average=0,maximum=0;
	cin >>n;
	for (i=1;i<=n;i++)
	{
		cin >>a[i];
		average+=a[i];
	}
	average=average/n;//????????
	for (i=1;i<=n;i++)
		if (fabs(a[i]-average)>maximum)
		{
			maximum=fabs(a[i]-average);
			result[0]=1;//result[0]??result?????????
			result[1]=a[i];
		}//?????????????result
		else
			if (fabs(a[i]-average)==maximum)//???????????
			{
				result[0]++;//result[0]??
				result[result[0]]=a[i];//a[i]??result??
			}
	unsigned temp;
	for (i=1;i<result[0];i++)
		for (j=1;j<=result[0]-i;j++)
			if (result[j]>result[j+1])
			{
				temp=result[j];result[j]=result[j+1];result[j+1]=temp;
			}//?result??????
    cout <<result[1];
	for (i=2;i<=result[0];i++)
		cout <<','<<result[i];//??
	return 0;
}