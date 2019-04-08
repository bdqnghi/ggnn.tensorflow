int n,m;
int jiaohuan(int str[5][5])
{ 
	int i,j,t;
  if(n<5&&m<5)
  {for(i=0;i<5;i++)
  {t=str[m][i];str[m][i]=str[n][i];str[n][i]=t;}
 return 1;}
  else return 0;
}

int main()
{
	int str[5][5],i,j;
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	{scanf("%d",&str[i][j]);}
	}
	scanf("%d %d",&n,&m);
    if(jiaohuan(str)==1)
	{for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	{if(j==0){printf("%d",str[i][j]);}
	else{printf(" %d",str[i][j]);}}
	printf("\n");}
	}
    if(jiaohuan(str)==0){printf("error");}
}

  