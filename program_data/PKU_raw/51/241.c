int main()
{
	char x[501];
	char ch[500][5];
	char y[5]="";
	int i,j,m=-1,flag,k,n,l,p,q,t,r,max,count[500]={0};
	scanf("%d ",&n);
	gets(x);
	l=strlen(x);
	for(i=0;i<l-n+1;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
			y[j]=x[i+j];
		for(k=0;k<=m;k++)
		{
			if(strcmp(y,ch[k])==0)
			{
				count[k]++;
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			m++;
			strcpy(ch[m],y);
			count[m]++;
		}
	}
	for(q=0;q<m;q++)
	{
		for(p=0;p<m-q;p++)
		{
			if(count[p]>count[p+1])
			{
				strcpy(y,ch[p]);strcpy(ch[p],ch[p+1]);strcpy(ch[p+1],y);
				t=count[p];count[p]=count[p+1];count[p+1]=t;
			}
		}
	}
	max=count[m];
	if(max>1)
	{
		for(i=m;;i--)
		{
			if(count[i]<max)
				break;
		}
		printf("%d\n",max);
		for(j=i+1;j<=m;j++)
		{	
			for(r=0;r<n;r++)
				printf("%c",ch[j][r]);
			printf("\n");
		}
	}
	else
		printf("NO\n");
}