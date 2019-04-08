int main()
{
	int i,j,sum,sum0;
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
         sum=0;
			if((y%4==0&&y%100!=0)||(y%400==0))
		{
			if(m==1)sum0=sum+d;
			if(m==2)sum0=sum+31+d;
			if(m==3)sum0=sum+31+29+d;
			if(m==4)sum0=sum+31*2+29+d;
			if(m==5)sum0=sum+31*2+30+29+d;
			if(m==6)sum0=sum+31*3+30+29+d;
			if(m==7)sum0=sum+31*3+30*2+29+d;
			if(m==8)sum0=sum+31*4+30*2+29+d;
			if(m==9)sum0=sum+31*5+30*2+29+d;
			if(m==10)sum0=sum+31*5+30*3+29+d;
			if(m==11)sum0=sum+31*6+30*3+29+d;
			if(m==12)sum0=sum+31*6+30*4+29+d;
		}
		else {
			if(m==1)sum0=sum+d;
			if(m==2)sum0=sum+31+d;
			if(m==3)sum0=sum+31+28+d;
			if(m==4)sum0=sum+31*2+28+d;
			if(m==5)sum0=sum+31*2+30+28+d;
			if(m==6)sum0=sum+31*3+30+28+d;
			if(m==7)sum0=sum+31*3+30*2+28+d;
			if(m==8)sum0=sum+31*4+30*2+28+d;
			if(m==9)sum0=sum+31*5+30*2+28+d;
			if(m==10)sum0=sum+31*5+30*3+28+d;
			if(m==11)sum0=sum+31*6+30*3+28+d;
			if(m==12)sum0=sum+31*6+30*4+28+d;}
          int k=0;
          k=y-1+(y-1)/4 -(y-1)/100+(y-1)/400+sum0;
	j=k%7;
	if(j==1) printf("Mon.");
	if(j==2) printf("Tue.");
	if(j==3) printf("Wed.");
	if(j==4) printf("Thu.");
	if(j==5) printf("Fri.");
	if(j==6) printf("Sat.");
	if(j==0) printf("Sun.");
	return 0;
}

