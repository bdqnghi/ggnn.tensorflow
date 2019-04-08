int main()
{
	char a[200];
	int judge[200]={0};
	char boy,girl;
	int i,j,last,num=0;
	scanf("%s",a);
	boy=a[0];
	last=0;
	girl=a[strlen(a)-1];
	while(num!=(strlen(a)+1)/2)
	{
		i=1;
		while(num!=(strlen(a)+1)/2)
		{
		if(a[last+i]==boy&&judge[last+i]==0) {last++;break;}
		else if(a[last+i]==girl&&judge[last+i]==0) 
		{printf("%d %d\n",last,last+i);judge[last]=1;judge[last+i]=1;
		while(judge[last]!=0)
		last--;
		num++;break;}
		else i++;
		}
	}
	return 0;
}
