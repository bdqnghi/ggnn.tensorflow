int main()
{
	int i,j,k;
	int a[2][3];
	int f=0,g=0,h=0,x=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
			scanf("%d",&a[i][j]);
	}
	}
	for(k=a[0][0];k<a[1][0];k++)
	{
		if(k%400==0)
		{
			x=x+366;
		}
		else if(k%100==0)
		{
			x=x+365;
		}
		else if(k%4==0)
		{
			x=x+366;
		}
		else
		{
			x=x+365;
		}
	}
	if(a[0][0]%4!=0)
	{
	if(a[0][1]==1)
		{
			f=0;
		}
		else if(a[0][1]==2)
		{
			f=31;
		}else if(a[0][1]==3)
		{
			f=59;
		}else if(a[0][1]==4)
		{
			f=90;
		}else if(a[0][1]==5)
		{
			f=120;
		}else if(a[0][1]==6)
		{
			f=151;
		}else if(a[0][1]==7)
		{
			f=181;
		}else if(a[0][1]==8)
		{
			f=212;
		}else if(a[0][1]==9)
		{
			f=243;
		}else if(a[0][1]==10)
		{
			f=273;
		}else if(a[0][1]==11)
		{
			f=304;
		}else
		{
			f=334;
		}
	}
	else{
		if(a[0][1]==1)
		{
			f=0;
		}
		else if(a[0][1]==2)
		{
			f=31;
		}else if(a[0][1]==3)
		{
			f=60;
		}else if(a[0][1]==4)
		{
			f=91;
		}else if(a[0][1]==5)
		{
			f=121;
		}else if(a[0][1]==6)
		{
			f=152;
		}else if(a[0][1]==7)
		{
			f=182;
		}else if(a[0][1]==8)
		{
			f=213;
		}else if(a[0][1]==9)
		{
			f=244;
		}else if(a[0][1]==10)
		{
			f=274;
		}else if(a[0][1]==11)
		{
			f=305;
		}else
		{
			f=335;
		}
	}
	if(a[1][0]%4!=0)
	{
	if(a[1][1]==1)
		{
			g=0;
		}
		else if(a[1][1]==2)
		{
			g=31;
		}else if(a[1][1]==3)
		{
			g=59;
		}else if(a[1][1]==4)
		{
			g=90;
		}else if(a[1][1]==5)
		{
			g=120;
		}else if(a[1][1]==6)
		{
			g=151;
		}else if(a[1][1]==7)
		{
			g=181;
		}else if(a[1][1]==8)
		{
			g=212;
		}else if(a[1][1]==9)
		{
			g=243;
		}else if(a[1][1]==10)
		{
			g=273;
		}else if(a[1][1]==11)
		{
			g=304;
		}else
		{
			g=334;
		}
	}
	else{
		if(a[1][1]==1)
		{
			g=0;
		}
		else if(a[1][1]==2)
		{
			g=31;
		}else if(a[1][1]==3)
		{
			g=60;
		}else if(a[1][1]==4)
		{
			g=91;
		}else if(a[1][1]==5)
		{
			g=121;
		}else if(a[1][1]==6)
		{
			g=152;
		}else if(a[1][1]==7)
		{
			g=182;
		}else if(a[1][1]==8)
		{
			g=213;
		}else if(a[1][1]==9)
		{
			g=244;
		}else if(a[1][1]==10)
		{
			g=274;
		}else if(a[1][1]==11)
		{
			g=305;
		}else
		{
			g=335;
		}
	}
		h=x+g+a[1][2]-f-a[0][2];
		printf("%d\n",h);
}

