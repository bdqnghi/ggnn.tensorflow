
int main()
{
	int n,m,a,b;
	int i,j,k,l,x,y;
	int bh[400]={0};
	int jishu=0;

	for(k=0;;k++)
	{
		
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
		{
			break;
		}
		else
		{
			for(i=0;i<400;i++)
			{
				bh[i]=0;
			}
			
			
			
			
			
			jishu=n;
			for(i=0;i<n;i++)
			{
				bh[i]=1;
			}



			for(i=0;jishu>1;)
			{
				if(bh[(i%n)]==0)
				{
					/*printf("%djiji\n",i);*/
					i=(i+1)%n;
					
				}
				else
				{

					for(x=0,y=0;x<m;)
					{
						if(bh[((i+x+y)%n)]!=0)
						{
							x++;
							
						}
						else
						{
							y++;
						}
					}
					bh[((i+x+y-1)%n)]=0;
					i=(i+x+y-1)%n;
					jishu--;
					/*printf("%d\n",i);*/
				}
			}

			for(i=0;i<n;i++)
			{
				if(bh[i]!=0)
				{
					printf("%d\n",i+1);
				}
			}




		}
	}



	return 0;
}



