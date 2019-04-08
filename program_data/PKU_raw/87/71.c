int main()
{
	while(1)
	{
		int sz[6];
		for(int i=0;i<6;i++)
		{
			scanf("%d",&sz[i]);
		}
		if(sz[0]==0 && sz[1]==0 && sz[2]==0 && sz[3]==0 && sz[4]==0 && sz[5]==0)
		{
			break;
		}
		int a,b,c,d,e,f,second;
		a=sz[0]+1;
		d=sz[3]+12;
		second=(d-a)*3600;
		e=sz[4]*60;
		f=sz[5];
		second=second+e+f;
		b=sz[1]*60;
		c=sz[2];
		second=second+3600-b-c;
		printf("%d\n",second);
	}
	return 0;
}


