
int main(int argc, char* argv[])
{int i,a,w=0,rizi=0,u;
	int yue[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	scanf("%d",&w);
	for(i=0;i<12;i++)
	{u=i+1;
rizi=yue[i]+12;
		a=rizi%7;
		if((w==1)&&(a==4))
		{printf("%d\n",u);}
		else if((w==2)&&(a==3))
{printf("%d\n",u);}
		else if((w==3)&&(a==2))
{printf("%d\n",u);}
		else if((w==4)&&(a==1))
{printf("%d\n",u);}
		else if((w==5)&&(a==0))
{printf("%d\n",u);}
		else if((w==6)&&(a==6))
{printf("%d\n",u);}
		else if((w==7)&&(a==5))
{printf("%d\n",u);}
	}
	return 0;
}