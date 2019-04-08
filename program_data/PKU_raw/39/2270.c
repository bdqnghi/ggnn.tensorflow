
int main(int argc, char* argv[])
{
	int n,i,j,a,b,e,max1=0,max2=0;
	char name[100],NAME[100];
	int sum[100];
	char c,d;
	int s[5];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++) s[j]=0;
		scanf("%s%d%d %c %c%d",name,&a,&b,&c,&d,&e);
		if(a>80&&e>=1) s[0]++;
		if(a>85&&b>80) s[1]++;
		if(a>90) s[2]++;
		if(a>85&&d=='Y') s[3]++;
		if(b>80&&c=='Y') s[4]++;
		sum[i]=8000*s[0]+4000*s[1]+2000*s[2]+1000*s[3]+850*s[4];
		if(sum[i]>max1) 
		{
			max1=sum[i];
			strcpy(NAME,name);
			for(j=0;j<100;j++) name[j]='\0';
		}
	}
	for(i=0;i<n;i++) max2=max2+sum[i];
	printf("%s\n%d\n%d\n",NAME,max1,max2);
	return 0;
}