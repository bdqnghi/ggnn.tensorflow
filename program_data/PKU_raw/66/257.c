int main(int argc, char* argv[])
{
	int y,m,d,i,x;
	scanf ("%d%d%d",&y,&m,&d);
	x=(y-1)%7+(y-1)/4-(y-1)/100+(y-1)/400;
	int md[]={0,31,28,31,30,31,30,31,31,30,31,30};
	for (i=1;i<m;i++)
		x=x+md[i];
	if ((y%4==0&&y%100!=0||y%400==0)&&m>2)
		x+=1;
    x +=d;
	switch (x%7)
	{
	case 0: printf ("Sun.");break;
	case 1: printf ("Mon.");break;
	case 2: printf ("Tue.");break;
	case 3: printf ("Wed.");break;
	case 4: printf ("Thu.");break;
	case 5: printf ("Fri.");break;
	case 6: printf ("Sat.");break;
	}

	return 0;
}

