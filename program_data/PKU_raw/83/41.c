int main(int argc, char* argv[])
{double GPA;
float c,m,sum=0,mum=0;
int n,i,p,q,u;
	scanf("%d",&n);
	struct majors
	{
	float credit;
	float marks;
	};
	struct majors *jidian;
	jidian=(struct majors *)malloc(sizeof(majors) * n);
	
	for (i=0;i<n;i++)
		{scanf("%f",&c);
         (jidian+i)->credit=c;
		}

	for (p=0;p<n;p++)
	{scanf("%f",&m);
		if ((m<=100)&&(m>=90))
		{(jidian+p)->marks=4.0;}
		else if ((m<=89)&&(m>=85))
		{(jidian+p)->marks=3.7;}
		else if ((m<=84)&&(m>=82))
		{(jidian+p)->marks=3.3;}
		else if ((m<=81)&&(m>=78))
		{(jidian+p)->marks=3.0;}
		else if ((m<=77)&&(m>=75))
		{(jidian+p)->marks=2.7;}
		else if ((m<=74)&&(m>=72))
		{(jidian+p)->marks=2.3;}
		else if ((m<=71)&&(m>=68))
		{(jidian+p)->marks=2.0;}
		else if ((m<=67)&&(m>=64))
		{(jidian+p)->marks=1.5;}
		else if ((m<=63)&&(m>=60))
		{(jidian+p)->marks=1.0;}
		else if (m<60)
		{(jidian+p)->marks=0;}
	}

	for(q=0;q<n;q++)
	{sum=sum+((jidian+q)->marks)*((jidian+q)->credit);}

	for(u=0;u<n;u++)
	{mum=mum+((jidian+u)->credit);}

	GPA=sum/mum;
	printf("%.2f",GPA);
	free(jidian);
	return 0;

}

