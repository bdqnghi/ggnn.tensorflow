void main(){
	int s,t,i,y,m,d,Y,M,D,n;
	scanf("%d%d%d%d%d%d",&y,&m,&d,&Y,&M,&D);
	s=0;
	t=0;
	for(i=1;i<=y-1;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			s=s+366;
		}
		else s=s+365;
	}
	for(i=1;i<=m-1;i++)
	{
		switch(i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:s=s+31;break;
		case 4:
		case 6:
		case 9:
		case 11:s=s+30;break;
		case 2:{
			if((y%4==0&&y%100!=0)||(y%400==0)) s=s+29;
			else s=s+28;
			   }
		}
	}
	s=s+d;
	for(i=1;i<=Y-1;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			t=t+366;
		}
		else t=t+365;
	}
	for(i=1;i<=M-1;i++)
	{
		switch(i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:t=t+31;break;
		case 4:
		case 6:
		case 9:
		case 11:t=t+30;break;
		case 2:{
			if((Y%4==0&&Y%100!=0)||(Y%400==0)) t=t+29;
			else t=t+28;
			   }
		}
	}
	t=t+D;
	n=t-s;
	printf("%d",n);
}