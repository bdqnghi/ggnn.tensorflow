void main()
{
	int h1,m1,s1,h2,m2,s2,s;
	for(;;)
	{
	scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
	if(h1==0 && m1 == 0 && s1==0) break;
	s=(h2+12-h1)*3600+(m2-m1)*60+s2-s1;
	printf("%d\n",s);
	}
}
