int yuanshi(int a,int b)
{
	if(a>80&&b>=1)
		return(8000);
	else return(0);
}
int wusi(int a,int b)
{
	if(a>85&&b>80)
		return(4000);
	else return(0);
}
int chengji(int a)
{
	if(a>90)
		return(2000);
	else return(0);
}
int xibu(int a,char b)
{
	if(a>85&&b=='Y')
		return(1000);
	else return(0);
}
int gongxian(int a,char b)
{
	if(a>80&&b=='Y')
		return(850);
	else return(0);
}

void main()
{
	struct award
	{
		char name[20];
		int qimocj;
		int banpingcj;
		char ynganbu;
		char ynxibu;
		int lunwen;
		int jiangjin;
	}aw[100],temp;
	int N,i,j,k,sum;
    scanf("%d",&N);
    for(i=0;i<N;i++)
	{
		aw[i].jiangjin=0;
		scanf("%s %d %d %c %c %d",&aw[i].name,&aw[i].qimocj,&aw[i].banpingcj,&aw[i].ynganbu,&aw[i].ynxibu,&aw[i].lunwen);
		aw[i].jiangjin=yuanshi(aw[i].qimocj,aw[i].lunwen)
			          +wusi(aw[i].qimocj,aw[i].banpingcj)
					  +chengji(aw[i].qimocj)
					  +xibu(aw[i].qimocj,aw[i].ynxibu)
					  +gongxian(aw[i].banpingcj,aw[i].ynganbu);
	
	}
	for(k=0;k<N-1;k++)
	{
		for(j=0;j<N-1-k;j++)
		{
			if(aw[j].jiangjin<aw[j+1].jiangjin)
			{
				temp=aw[j];
				aw[j]=aw[j+1];
				aw[j+1]=temp;
			}
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		sum=sum+aw[i].jiangjin;
	}
        printf("%s\n%d\n%d",aw[0].name,aw[0].jiangjin,sum);

}