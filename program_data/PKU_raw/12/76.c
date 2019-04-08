
//??, bingxue_ningyan@sina.com 

int main()
{
	int n[100][100],i,k,j,s[100],num[100],t,p,m;
	//double a;
	for(i=0;i<100;i++)
	{
		scanf("%d",&n[i][0]);
		if(n[i][0]==-1) break;
		else 
		{
			for(j=1;j<100;j++)
			{
				scanf("%d",&n[i][j]);
				if(n[i][j]==0){
					num[i] = j;
					break;
				}
			}
		}
	
	}

	for(k=0;k<i;k++)
	{
		s[k]=0;
		for(t=0;t<j;t++)
		{
			for(m=t;m<num[k];m++)
			{
				if( (2*n[k][t]==n[k][m]) || (2*n[k][m]==n[k][t]) )
				{
					s[k]=s[k]+1;
				}
				//if(a==2.0||a==0.5) s[k]=s[k]+1;
			}
		}
	}
	for(p=0;p<i;p++)
		printf("%d\n",s[p]);
	return 0;
}
