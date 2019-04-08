
int abs(int a, int b)
{
	if(a<=b)
		return(b-a);
	else
		return(a-b);
}

int Leap(int y)
{
	if((y%4==0 && y%100!=0)||y%400==0)
		return 1;
	else
		return 0;
}

int Days(int y, int m, int d)
{
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int s=0;
	if(Leap(y))
		days[2]=29;
	for(i=0;i<m;i++)
		s=s+days[i];
	s=s+d;
	return s;
}

int main(int y1,int y2,int m1,int m2,int d1,int d2)
{
	int s1,s2;
	int s=0;
	int i;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);

	if(y1==y2)
	{
		s1=Days(y1,m1,d1);
		s2=Days(y2,m2,d2);
		s=abs(s1,s2);
	}
	else
		if(y2-y1==1)
		{
			s1=Days(y1,12,31)-Days(y1,m1,d1);
			s2=Days(y2,m2,d2);
			s=s1+s2;
		}
		else
		{
			for(i=y1+1;i<y2;i++)
				s=s+Days(i,12,31);
			s1=Days(y1,12,31)-Days(y1,m1,d1);
			s2=Days(y2,m2,d2);
			s=s+s1+s2;
		}
	printf("%d\n",s);
}
