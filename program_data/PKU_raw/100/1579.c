char sz[300];
char zimu[300]={0,0};
int cishu[300]={0,0};
int main()
{
    int geshu=0;
	gets(sz);
	for(int i=0;i<300;i++)
	{
		if((sz[i]>=65&&sz[i]<=90)||(sz[i]>=97)&&(sz[i<=122]))
		{
			zimu[sz[i]]=sz[i];
			cishu[sz[i]]++; 
			geshu++;
		}
	}
	if(geshu==0)
	{
		printf("No");
	}
	else
	{
		for(int g=0;g<300;g++)
	{
		if(zimu[g]!=0)
		{
			printf("%c=%d\n",zimu[g],cishu[g]);
		}
	}
	}
    return 0;
}