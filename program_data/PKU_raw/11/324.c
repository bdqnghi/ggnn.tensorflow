
int main()
{
	int a[100];
	int i,y,m,d,s;

	scanf("%d%d%d",&y,&m,&d);
    if (( (y%4==0) && (y%100>0) )||(y%400==0) ) a[2]=29;
	  else a[2]=28;
	
	a[1]=31;a[3]=31;a[5]=31;a[7]=31;a[8]=31;a[10]=31;a[12]=31;
	a[4]=30;a[6]=30;a[9]=30;a[11]=30;
	s=0;
	for (i=1;i<m;i++)
	  s=s+a[i];	
	s=s+d;
	printf("%d\n",s);
	return 0;
}

