
void main()
{
	int n,i,j,len,tlen,t=0;
	char num1[100][200];
	char num2[100][200];
	char temp[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %s",num1[i],num2[i]);
	for(i=0;i<n;i++)
	{
		strcpy(temp,num2[i]);
		t=0;
		tlen=strlen(num1[i])-strlen(num2[i]);
		for(j=0;j<tlen;j++)
			num2[i][j]='0';
		num2[i][j]=0;
		strcat(num2[i],temp);
		len=strlen(num1[i]);
		for(j=len-1;j>=0;j--)
		{
			if(num1[i][j]+t-num2[i][j]>=0){
				num1[i][j]=num1[i][j]+t-num2[i][j]+48;
				t=0;}
			else {num1[i][j]=num1[i][j]+t-num2[i][j]+58;
			t=-1;}
		}

		if(i!=n-1)
		printf("%s\n",num1[i]);
		else printf("%s",num1[i]);
	}

}