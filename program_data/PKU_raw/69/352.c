int main()
{
	char a[251]={'0'},b[251]={'0'};
	int a1[251]={0},a2[251]={0},a3[251]={0},a4[251]={0};
    cin.getline(a,251);
	cin.getline(b,251);
	int l1=strlen(a);
	int l2=strlen(b);
	int len;
	if(l1>=l2)len=l1;
	else len=l2;
	int i,j;
	int num;
	for(i=0;i<l1;i++)
		a1[i]=a[l1-i-1]-'0';
	for(j=0;j<l2;j++)
		a2[j]=b[l2-j-1]-'0';
    for(i=0;i<=len;i++)
	{
		if(a1[i]+a2[i]+a3[i]>9)
		a3[i+1]=1;
     	a4[i]=(a1[i]+a2[i]+a3[i])%10;
	}
	if(a3[len]==1)
	num=len;
	else num=len-1;
	for(i=num;i>=0;i--)
		if(a4[i]!=0)
		{
            num=i;
			break;
		}
	  if(i==0)cout<<a4[0];
	  else
	  {
	    for(j=num;j>=0;j--)
			cout<<a4[j];
	  }
	  return 0;
}