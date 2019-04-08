
	   
int main()
{
	int A[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int B[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,i;

    scanf("%d%d%d",&y,&m,&d);
	int s=d;
	if((y%4==0&&y%100!=0)||(y%400==0))
	{for(i=0;i<(m-1);i++)
	{s+=B[i];
	}
	printf("%d",s);}
    else
	{for(i=0;i<(m-1);i++)
	{
     s+=A[i];
	}
	printf("%d",s);}
	return 0;
}

