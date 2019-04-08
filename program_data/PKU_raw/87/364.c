int main()
{
	int sz[100][6],jg[100]={0},result1,result2,result,i,j;
	for(i=0;;i++)
	{
		result1=0;
		result2=0;
		result=0;
		scanf("%d %d %d %d %d %d",&sz[i][0],&sz[i][1],&sz[i][2],&sz[i][3],&sz[i][4],&sz[i][5]);
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0)
		{
			break;
		}
		result1+=(sz[i][0]*3600+sz[i][1]*60+sz[i][2]);
		result2+=((sz[i][3]+12)*3600+sz[i][4]*60+sz[i][5]);
		result+=(result2-result1);
		jg[i]+=result;
	}
	for(j=0;j<i;j++)
	{
		printf("%d\n",jg[j]);
	}
	return 0;
}