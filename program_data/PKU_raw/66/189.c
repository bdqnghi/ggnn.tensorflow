int main()
{
	int year,mon,day;
	scanf("%d%d%d",&year,&mon,&day);
	int pass=0;
	//????
    int AC[5]={0,1,2,3,5};
	if(year<=4)
	{
		pass=pass+AC[year-1];
	}
	else if(year<=100)
	{
		pass=pass+5*((year-1)/4)+AC[(year-1)%4];
	}
	else if(year<=400)
	{
		pass=pass+5*((year-1)/100)+5*(((year-1)%100)/4)+AC[(year-1)%4];
	}
	else
	{
		pass=pass+5*(((year-1)%400)/100)+5*(((year-1)%100)/4)+AC[(year-1)%4];
	}
	int i;
	//????
	int month[13]={0,3,0,3,2,3,2,3,3,2,3,2,3};
	for(i=1;i<mon;i++)
	{
		pass=pass+month[i];
	}
	if(mon>2&&year%4==0&&year>=4&&year%100!=0)
	{
		pass=pass+1;
	}
	else if(mon>2&&year%100==0&&year>=100&&year%400==0)
	{	
		pass=pass+1;
	}
	//????
	for(i=1;i<=day;i++)
	{
		pass=pass+1;
	}
	struct seven{
		int d1;
		char d2[5];
	}days[7]={0,"Sun.",1,"Mon.",2,"Tue.",3,"Wed.",4,"Thu.",5,"Fri.",6,"Sat."};
	int x;
	if(pass<7)
		x=pass;
	else
	    x=pass%7;
	printf("%s\n",days[x].d2);
	return 0;
}