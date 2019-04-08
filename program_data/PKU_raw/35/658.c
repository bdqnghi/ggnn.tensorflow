int main()
{
	int h,l,s[8][8],i,k;
	scanf("%d,%d",&h,&l);
	int max[8];
	int mh[8],ml[8],f;
	for(i=0;i<h;i++)
	{
		f=1;
		for(k=0;k<l;k++)
		{
			scanf("%d",&s[i][k]);
			if(f==1){
				max[i]=s[i][0];
				mh[i]=i;
				ml[i]=0;
				f=0;}
			if(f==0&&max[i]<s[i][k])
			{
				max[i]=s[i][k];
				ml[i]=k;
			}
		}
	}
	int ff=1;
	for(i=0;i<h;i++)
	{
		for(k=0;k<h;k++)
		{
			if(max[i]>s[k][(ml[i])])
				break;
			else
			{
				if(k==(h-1))
				{
			    	printf("%d+%d",mh[i],ml[i]);
			    	ff=0;
				}
			}
		}
		if(ff==1&&i==(h-1))
			printf("No");
	}
	return 0;
}
