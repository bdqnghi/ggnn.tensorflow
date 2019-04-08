void main()
{
	int sty,stm,std,eny,enm,end;
	int i,j,k,a,b;a=0;
	scanf("%d %d %d",&sty,&stm,&std);
	scanf("%d %d %d",&eny,&enm,&end);
	int daysto1_1_(int n);
	std=std+daysto1_1_(stm);
	end=end+daysto1_1_(enm);
	if ((stm<=2&&sty%4==0&&sty%100!=0)||sty%400==0)
	{a++;}
	for(i=sty+1;i<eny;i++)
		{ if ((i%4==0&&i%100!=0)||i%400==0)
		{a++;}
		}
    if ((enm>=2&&eny%4==0&&eny%100!=0)||eny%400==0)
	{a++;}
	b=end-std+a+365*(eny-sty);
	printf("%d",b);
}
int daysto1_1_(int n)
{
	int y=0;
	switch(n)
	{ 
	case 12:y=y+30;
	case 11:y=y+31;
	case 10:y=y+30;
	case 9:y=y+31;
    case 8:y=y+31;
	case 7:y=y+30;
	case 6:y=y+31;
	case 5:y=y+30;
	case 4:y=y+31;
	case 3:y=y+28;
	case 2:y=y+31;
	default: break;
	}
    return(y);
}