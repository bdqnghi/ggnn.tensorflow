int main(int argc, char* argv[])
{
	int x,y,z,s;
	scanf("%d%d%d",&x,&y,&z);
	int a;
	if(x%4==0)
		if(x%100==0)
			if(x%400==0)
				a=29;
			else
				a=28;
		else
			a=29;
	else
		a=28;
    if(y==1||y==2)
	{
        s=(y-1)*31+z;
	}
	else if (y==3||y==7||y==5)
	{
		s=(y-1)/2*31+(y-3)/2*30+a+z;
	}
	else if(y==4||y==6)
	{
		s=y/2*31+(y-4)/2*30+a+z;
	}
	else if(y==9||y==11)
	{
		s=(y+1)/2*31+(y-5)/2*30+a+z;
	}
	else if(y==8||y==10||y==12)
	{
		s=y/2*31+(y-4)/2*30+a+z;
	}
	printf("%d\n",s);
	return 0;
}

