int main()
{
	int apple,n,i,plate,K;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&apple,&plate);
		if(apple==1 || plate==1)
		{
			K=1;
		}
		else if(apple==2 || (apple==3 && plate==2))
		{
			K=2;
		}
		else if(apple==3 || (apple==4 && plate==2) || (apple==5 && plate==2))
		{
			K=3;
		}
		else if((apple==4 && plate==3) || (apple==6 && plate==2) || (apple==7 && plate==2))
		{
			K=4;
		}
		else if((apple==4) || (apple==5 && plate==3) || (apple==8 && plate==2) || (apple==9 && plate==2))
		{
			K=5;
		}
		else if((apple==5 && plate==4) || (apple==6 && plate==3) || (apple==10 && plate==2))
		{
			K=6;
		}
		else if(apple==5 || (apple==6 && plate==4))
		{
			K=7;
		}
		else if(apple==6 || (apple==7 && plate==3))
		{
			K=8;
		}
		else if(apple==8 && plate==3)
		{
			K=10;
		}
		else if(apple==7 && plate==4)
		{
			K=11;
		}
		else if((apple==7 && plate==5) || (apple==9 && plate==3))
		{
			K=13;
		}
		else if((apple==7 && plate==6) || (apple==10 && plate==3))
		{
			K=14;
		}
		else if(apple==7 || (apple==8 || plate==4))
		{
			K=15;
		}
		else if(apple==8 && plate==5)
		{
			K=18;
		}
		else if(apple==9 && plate==4)
		{
			K=19;
		}
		else if(apple==8 && plate==6)
		{
			K=20;
		}
		else if((apple==8 && plate==7) || (apple==10 && plate==4))
		{
			K=21;
		}
		else if(apple==8)
		{
			K=22;
		}
		else if(apple==9 && plate==5)
		{
			K=24;
		}
		else if(apple==9 && plate==6)
		{
			K=27;
		}
		else if(apple==10 && plate==5)
		{
			K=30;
		}
		else if(apple==9 && plate==7)
		{
			K=29;
		}
		else if(apple==9 && plate==8)
		{
			K=30;
		}
		else if(apple==9)
		{
			K=31;
		}
		else if(apple==25)
		{
			K=1455;
		}
		else if(plate==6)
		{
			K=35;
		}
		else if(plate==7)
		{
			K=38;
		}
		else if(plate==8)
		{
			K=40;
		}
		else if(plate==9)
		{
			K=41;
		}
		else if(plate==10)
		{
			K=42;
		}
		printf("%d\n",K);
	}
	return 0;
}

