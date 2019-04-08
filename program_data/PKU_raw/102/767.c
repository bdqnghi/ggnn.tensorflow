int cmp1(float a,float b)
{
	if(a>b)
		return 1;
	else 
		return 0;
}
int cmp2(float a,float b)
{
	if(a<b)
		return 1;
	else 
		return 0;
}
float mail[1000];
float femail[1000];
char sex[1000];
int main()
{
	//freopen("D:\\1.txt","r",stdin);
	int N;
	cin>>N;
	int i,j,k;
	j=0;
	k=0;
	float temp;
	for(i=0;i<N;i++)
	{
		cin>>sex;
		cin>>temp;
		if(strcmp(sex,"male")==0)
			mail[j++]=temp;
		else 
			if(strcmp(sex,"female")==0)
			femail[k++]=temp;
	}
	sort(mail,mail+j,cmp1);
	sort(femail,femail+k,cmp1);
	for(i=j-1;i>=0;i--)
		printf("%.2f ",mail[i]);
	for(i=0;i<k;i++)
		if(i!=k-1)
		printf("%.2f ",femail[i]);
		else
			printf("%.2f\n",femail[i]);
	return 0;
}