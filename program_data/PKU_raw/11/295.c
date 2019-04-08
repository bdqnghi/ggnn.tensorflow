

int main(int argc, char* argv[])
{
	int y,m,d;//y=year,m=month,d=day
	scanf("%d%d%d",&y,&m,&d);
	if(y%100==0&&y%40==0||y%100!=0&&y%4==0)//leap year,29 days in Feb
		switch (m)
	{
		    case 1: printf("%d\n",d);break;
			case 2: printf("%d\n",d+31);break;
			case 3: printf("%d\n",d+60);break;
			case 4: printf("%d\n",d+91);break;
			case 5: printf("%d\n",d+121);break;
			case 6: printf("%d\n",d+152);break;
			case 7: printf("%d\n",d+182);break;
			case 8: printf("%d\n",d+213);break;
			case 9: printf("%d\n",d+244);break;
			case 10: printf("%d\n",d+274);break;
			case 11: printf("%d\n",d+305);break;
			case 12:printf("%d\n",d+335);break;

	}
	else
		switch (m)
	{
            case 1: printf("%d\n",d);break;
			case 2: printf("%d\n",d+31);break;
			case 3: printf("%d\n",d+59);break;
			case 4: printf("%d\n",d+90);break;
			case 5: printf("%d\n",d+120);break;
			case 6: printf("%d\n",d+151);break;
			case 7: printf("%d\n",d+181);break;
			case 8: printf("%d\n",d+212);break;
			case 9: printf("%d\n",d+243);break;
			case 10: printf("%d\n",d+273);break;
			case 11: printf("%d\n",d+304);break;
			case 12:printf("%d\n",d+334);break;
	}
	return 0;
}

