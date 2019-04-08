
int main(int argc, char* argv[])
{
	int num[15];
	int i,m;
	for(i=0;i<15;i++)
	{scanf("%d",&num[i]);
	{if(num[i]==0)
	break;}
    i++;
	}
	int j=0;
	int a;
    m=i;
    i=a=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{if(num[i]/num[j]==2&&num[i]%num[j]==0)
		a++;}
	}
	printf("%d\n",a);
	return 0;
}