void main()
{
	int x[100][15],a[100],b[100]={0},m,i,j,k;
		for(i=0;;i++)
		{
			for(j=0;i<15;j++)
			{
				scanf("%d",&x[i][j]);
				if(x[i][j]==0||x[i][j]==-1)
                                     {a[i]=j;break;}   //a[i]???i??????
			}
			if(x[i][j]==-1) {m=i;break;} //m??????????
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<a[i];j++)
			{
				for(k=0;k<a[i];k++)
				{
					if((float)x[i][k]/(float)x[i][j]==2.0) b[i]++;   //b[i]???i???????????
				}
			}
		}
		for(i=0;i<m;i++)
			printf("%d\n",b[i]);
		return;
}