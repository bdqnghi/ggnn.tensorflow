char a[100];
void fuc(char *num0,int n)//??j-1?
{
	if(num0[n]>'0') num0[n]=num0[n]-1;
	else {
		num0[n]='9';
		fuc(num0,n-1);
	}

}
void minus(char num0[],char num1[])
{
	int last[2],i,j,k;
	last[0]=strlen(num0)-1;//??????
	last[1]=strlen(num1)-1;
	a[last[0]+1]='\0';
	for (i=last[1],j=last[0];j>=0;i--,j--)
	{
		if(i>=0)
		{
			if(num0[j]-num1[i]>=0) a[j]=num0[j]-num1[i]+'0';
			else {a[j]=num0[j]-num1[i]+'0'+10;fuc(num0,j-1);}
		}
		else a[j]=num0[j];

	}
	if (a[0]=='0')
		for(i=0;;i++)
		{
			if(a[i]=='0') continue;
			else {
				j=i;
				for (k=j;k<=last[0]+1;k++)
					a[k-j]=a[k];
				break;
			}

		}


}
void main()
{
	int n,i;
	char num[3][100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %s",num[0],num[1]);
		minus(num[0],num[1]);
		printf("%s\n",a);
	}
}