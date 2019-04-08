
f(int a[5][5],int s,int t)
{
	int i,k,b[1][5];
	
	if(s<0||s>4||t<0||t>4)
			k=0;
		else 
		{
			k=1;
			for(i=0;i<5;i++)
			{
				b[0][i]=a[s][i];
				a[s][i]=a[t][i];
				a[t][i]=b[0][i];
			
			}


		}
	return(k);
}



void main()
{
	int d[5][5],m,n,i,j;
	
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&d[i][j]);
		scanf("%d%d",&m,&n);
    f(d,m,n);
	if(f(d,m,n)==0)
		printf("error");
		else if(f(d,m,n)==1)
			  for(i=0;i<5;i++)
			  {
				  for(j=0;j<5;j++)
				  {if(j/4==0)
					  printf("%d ",d[i][j]);
				else  if(j/4==1)
				printf("%d\n",d[i][j]);
				  }
			  }
}

