
int main()
{
	int x,y,t;
	scanf("%d %d",&x,&y);
	if(x==1||y==1)
	{
		printf("1\n");
	}
	else
	{if(x==y)
	{printf("%d\n",x);}
	else
	{do
	{if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	y=y/2;
	}while(x!=y);
	printf("%d\n",y);
	}
	}


	return 0;
}

