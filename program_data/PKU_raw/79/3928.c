int main()
{
	int n[10],m[10];
	scanf("%d %d",&n[0],&m[0]);
	int i;
	for(i=1;n[i-1]!=0&&m[i-1]!=0;i++)
		scanf("%d %d",&n[i],&m[i]);

    for(i=0;n[i]!=0&&m[i]!=0;i++)
	{
		int j,hou[360];
		for(j=0;j<360;j++)
			hou[j]=j+1;
		int count=0,num=0;
loop:for(j=0;j<n[i];j++)
	 {
		if(hou[j]!=0)
		count++;
		if(count==m[i])
		{
		hou[j]=0;
		count=0;
		}
	 }
		for(j=0;j<n[i];j++)
		{
		if(hou[j]!=0)
		num++;
		}
		if(num>1)
		{	
			num=0;
			goto loop;
		}
		if(num==0)
		{
			int h=n[i];
			printf("%d\n",h);
		}
		for(j=0;j<n[i];j++)
		{
			if(hou[j]!=0)
			{
		printf("%d\n",hou[j]);
		break;}
		}
	}
	return 0;
}
