int main()
{
	int x,y,z,m,j;
	scanf("%d%d%d",&x,&y,&z);
	m=(365%7)*(x-1)+z+(x-1)/4+(x-1)/400-(x-1)/100;
	int n[12];
	n[1]=n[3]=n[5]=n[7]=n[8]=n[10]=n[12]=31;
	n[4]=n[6]=n[9]=n[11]=30;
	if((x%4==0&&x%100!=0)||(x%400==0))n[2]=29;
	else n[2]=28;
	for(j=1;j<=12;j++)
	{
		if(j<y)m=m+n[j];
	}
    if(m%7==0)printf("Sun.");
	else if(m%7==1)printf("Mon.");
	else if(m%7==2)printf("Tue.");
	else if(m%7==3)printf("Wed.");
	else if(m%7==4)printf("Thu.");
	else if(m%7==5)printf("Fri.");
	else printf("Sat.");
	return 0;
}