int main()
{
	double arrey[5] ;
	double m;
	int i ;
	for(i=0 ; i<5 ; i++ )
	{
		scanf("%lf" , &m );
		arrey[i]=m ;
	}
	double s , f , k ;
	k=(arrey[4]*PI)/360 ;
	s = (double)1/2*(arrey[0]+arrey[1]+arrey[2]+arrey[3]);
    if ( ((s-arrey[0])*(s-arrey[1])*(s-arrey[2])*(s-arrey[3]) - arrey[0]*arrey[1]*arrey[2]*arrey[3]*cos(k)*cos(k))>=0 )
	{
		f = sqrt((s-arrey[0])*(s-arrey[1])*(s-arrey[2])*(s-arrey[3]) - arrey[0]*arrey[1]*arrey[2]*arrey[3]*cos(k)*cos(k));
		printf ("%.4f" , f );
	}
	else
		printf ("Invalid input");
	return 0;
}

