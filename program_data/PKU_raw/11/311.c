
int main(int argc, char* argv[]) 
{ 
	int a,b,c,s=0;
	scanf("%d%d%d",&a,&b,&c);
	 int   m1=31,
		m2=28,
		m21=29,
		m3=31,
		m4=30,
		m5=31,
		m6=30,
		m7=31,
		m8=31,
		m9=30,
		m10=31,
		m11=30,
		m12=31;
		if (a%4!=0||(a%100==0&&a%400!=0))
		{switch(b) 
		{	case(1):
		s=c;
		printf("%d\n",s);break;
 	case(2):
		
		s=31+c;
		printf("%d\n",s);break;
	case(3):
			s=31+28+c;
			printf("%d\n",s);break;

	case(4):
				s=m1+m2+m3+c;
				printf("%d\n",s);break;

	case(5):
				s=m1+m2+m3+m4+c;
				printf("%d\n",s);break;
	case(6):
s=m1+m2+m3+m4+m5+c;
	printf("%d\n",s);break;

	case(7):
s=m1+m2+m3+m4+m5+m6+c;
	printf("%d\n",s);break;
	case(8):
s=m1+m2+m3+m4+m5+m6+m7+c;
	printf("%d\n",s);break;
	case(9):
s=m1+m2+m3+m4+m5+m6+m7+m8+c;
	printf("%d\n",s);break;
	case(10):
s=m1+m2+m3+m4+m5+m6+m7+m8+m9+c;
printf("%d\n",s);break;
	case(11):
s=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+c;
	printf("%d\n",s);break;
	case(12):
s=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+c;
	printf("%d\n",s);break;
		}}
		else
		{
			switch (b)
			{	case(1):
		s=c;
	printf("%d\n",s);break;
			case(2):
		
		s=31+c;
		printf("%d\n",s);break;
			case(3):
			s=31+29+c;
			printf("%d\n",s);break;

			case(4):
				s=m1+m21+m3+c;
				printf("%d\n",s);break;

			case(5):
				s=m1+m21+m3+m4+c;
				printf("%d\n",s);break;
			case(6):
s=m1+m21+m3+m4+m5+c;
	printf("%d\n",s);break;

			case(7):
s=m1+m21+m3+m4+m5+m6+c;
	printf("%d\n",s);break;
			case(8):
s=m1+m21+m3+m4+m5+m6+m7+c;
	printf("%d\n",s);break;
			case(9):
s=m1+m21+m3+m4+m5+m6+m7+m8+c;
	printf("%d\n",s);break;
			case(10):
s=m1+m21+m3+m4+m5+m6+m7+m8+m9+c;
printf("%d\n",s);break;
			case(11):
s=m1+m21+m3+m4+m5+m6+m7+m8+m9+m10+c;
	printf("%d\n",s);break;
			case(12):
s=m1+m21+m3+m4+m5+m6+m7+m8+m9+m10+m11+c;
	printf("%d\n",s);break;
		}}
	return 0;
}

