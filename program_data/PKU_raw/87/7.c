int main()
{
	int a[6]={1},n,i,shijian;
	while(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0||a[5]!=0){
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0||a[5]!=0)
	{
		 shijian=3600*(12+a[3]-a[0])+(a[4]-a[1])*60+a[5]-a[2];
	}
	else break;
	printf("%d\n",shijian);
	}
	return 0;
}