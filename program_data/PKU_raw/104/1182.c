int main()
{
	int x,y,l1=0,l2=0,i,j,k=0;
	scanf("%d%d",&x,&y);
	int s1[10]={0},s2[10]={0};
	int level(int a);
	l1=level(x);
	l2=level(y);
	s1[0]=x;
	s2[0]=y;
	for(i=1;i<l1;i++)
	{
		s1[i]=s1[i-1]/2;
	}
	for(i=1;i<l2;i++)
	{
		s2[i]=s2[i-1]/2;
	}
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
			if(s1[i]==s2[j]&&s1[i]!=0&&s2[j]!=0) {k=s1[i];break;}
		if(k!=0) break;
	}
	printf("%d\n",k);
	return 0;
}
int level(int a)
{
	int k=0;
	if(a==1) k=1;
	if(a>1&&a<4) k=2;
	if(a>4&&a<8) k=3;
	if(a>8&&a<16) k=4;
	if(a>16&&a<32) k=5;
	if(a>32&&a<64) k=6;
	if(a>64&&a<128) k=7;
	if(a>128&&a<256) k=8;
	if(a>256&&a<512) k=9;
	else k=10;
	return(k);
}