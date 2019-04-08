
struct air
{
	int rank;
	int check;
};
int checka(int E)
{
	if(E==1)
	{return 1;}
	else
	{return 0;}
}

int checkb(int B)
{
	if(B==2)
	{return 1;}
	else
	{return 0;}
}

int checkc(int A)
{
	if(A==5)
	{return 1;}
	else
	{return 0;}
}
int checkd(int C)
{
	if(C!=1)
	{return 1;}
	else
	{return 0;}
}
int checke(int D)
{
	if(D==1)
	{return 1;}
	else
	{return 0;}
}

int main(void)
{
	struct air p[5];
	
	for(int a=1;a<6;a++)
	{
		for(int b=1;b<6;b++)
		{
			if(b==a){continue;}
			for(int c=1;c<6;c++)
			{
				if(c==a||c==b){continue;}
				for(int d=1;d<6;d++)
				{
					if(d==a||d==b||d==c){continue;}
					for(int e=1;e<6;e++)
					{
						if(e==a||e==b||e==c||e==d||e==2||e==3){continue;}
						int Check=1;
						p[0].rank=a;p[1].rank=b;p[2].rank=c;p[3].rank=d;p[4].rank=e;
						p[0].check=checka(p[4].rank);
						p[1].check=checkb(p[1].rank);
						p[2].check=checkc(p[0].rank);
						p[3].check=checkd(p[2].rank);
						p[4].check=checke(p[3].rank);
						for(int u=0;u<5;u++)
						{
							if(	((p[u].rank!=1&&p[u].rank!=2)&&(p[u].check==1)) ||((p[u].rank==1||p[u].rank==2)&&(p[u].check==0)))
							{Check=0;break;}
						}
						if(Check==1)
						{
							printf("%d",p[0]);
							for(int i=1;i<5;i++)
							{
								printf(" %d",p[i].rank);
							}
						}
					}
				}
			}
		}
	}

	return 0;
}