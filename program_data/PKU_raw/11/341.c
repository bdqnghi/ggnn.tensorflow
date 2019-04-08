
int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a%400==0||(a%4==0&&a%100!=0))
	{
		if(b==1)printf("%d\n",c);
		else if(b==2)printf("%d\n",c+31);
		else if(b==3)printf("%d\n",c+31+29);
		else if(b==4)printf("%d\n",c+31+29+31);
		else if(b==5)printf("%d\n",c+31+29+31+30);
		else if(b==6)printf("%d\n",c+31+29+31+30+31);
		else if(b==7)printf("%d\n",c+31+29+31+30+31+30);
		else if(b==8)printf("%d\n",c+31+29+31+30+31+30+31);
		else if(b==9)printf("%d\n",c+31+29+31+30+31+30+31+31);
		else if(b==10)printf("%d\n",c+31+29+31+30+31+30+31+31+30);
		else if(b==11)printf("%d\n",c+31+29+31+30+31+30+31+31+30+31);
		else printf("%d\n",c+31+29+31+30+31+30+31+31+30+31+30);
	}
	else
	{
		if(b==1)printf("%d\n",c);
		else if(b==2)printf("%d\n",c+31);
		else if(b==3)printf("%d\n",c+31+28);
		else if(b==4)printf("%d\n",c+31+28+31);
		else if(b==5)printf("%d\n",c+31+28+31+30);
		else if(b==6)printf("%d\n",c+31+28+31+30+31);
		else if(b==7)printf("%d\n",c+31+28+31+30+31+30);
		else if(b==8)printf("%d\n",c+31+28+31+30+31+30+31);
		else if(b==9)printf("%d\n",c+31+28+31+30+31+30+31+31);
		else if(b==10)printf("%d\n",c+31+28+31+30+31+30+31+31+30);
		else if(b==11)printf("%d\n",c+31+28+31+30+31+30+31+31+30+31);
		else printf("%d\n",c+31+28+31+30+31+30+31+31+30+31+30);
	}
	return 0;
}
