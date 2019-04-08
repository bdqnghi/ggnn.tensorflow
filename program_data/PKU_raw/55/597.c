char str[50],ans[50];
int main()
{
	int i,j,k,l,length,num,x;
	long m,n,ten=0,ten2=0;
	scanf("%ld%s%ld",&n,str,&m);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		x=1;
		if((str[i]>='a')&&(str[i]<='z')) num=str[i]-87;
		else if((str[i]>='A')&&(str[i]<='Z')) num=str[i]-55;
		else num=str[i]-48;
		for(j=0;j<(length-i-1);j++)
		{
			x=x*n;
		}
		ten=ten+x*num;
	}
	if(ten==0) printf("0\n");
	else
	{
		for(k=0;(ten!=0);k++)
		{
			ten2=ten;
			ten=ten/m;
			ans[k]=ten2-ten*m+48;
		}
		for(l=0;l<k;l++)
		{
			if(l!=(k-1))
			{
				if(ans[k-l-1]>'9') {ans[k-l-1]=ans[k-l-1]+7;printf("%c",ans[k-l-1]);}
				else printf("%c",ans[k-l-1]);
			}
			else
			{
				if(ans[k-l-1]>'9') {ans[k-l-1]=ans[k-l-1]+7;printf("%c\n",ans[k-l-1]);}
				else printf("%c\n",ans[k-l-1]);
			}
		}
	}
	return 0;
}
