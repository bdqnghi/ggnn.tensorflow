int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int y;
	int m1,m2;
	int e;
         int d;
	int j;
	for(i=1;i<=n;i++)
	{
	    scanf("%d%d%d",&y,&m1,&m2);
		if(m1>m2) {
			e=m1;
			m1=m2;
			m2=e;
		}
		d=0;
        for(j=m1;j<m2;j++)
		{
			if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12)) 
			{d+=31;
			}
			if((j==4)||(j==6)||(j==9)||(j==11)) {
				d+=30;
			}
			if(j==2){
				if((y%4==0&&y%100!=0)||y%400==0) d+=29;
				else d+=28;
			}
		}
		if(d%7==0) printf("YES\n");
		else {
                  printf("NO\n");}
	}
	return 0;
}
