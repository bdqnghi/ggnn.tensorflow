int main()
{
	int y,m,d,num;
	scanf ("%d %d %d",&y,&m,&d);
	switch (m)
	{
	case 1:num=d;break;
	case 2:num=31+d;break;
	case 3:num=59+d;break;
	case 4:num=90+d;break;
	case 5:num=120+d;break;
	case 6:num=151+d;break;
	case 7:num=181+d;break;
	case 8:num=212+d;break;
	case 9:num=243+d;break;
	case 10:num=273+d;break;
	case 11:num=304+d;break;
	case 12:num=334+d;break;
	}
	if (((y%4==0&&y%100!=0)||(y%400==0))&&(m>2))
		num=num+1;
         printf("%d\n",num);
	return 0;
}

