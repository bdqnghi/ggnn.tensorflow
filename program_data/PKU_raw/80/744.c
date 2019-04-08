int judge(int n)
{if (((n%4==0) && ((n%100)!=0))||((n%400)==0)) return 1; else return 0;
}
int add(int g[15],int year,int mon,int day)
{ int i,s=0;
  	if (judge(year)) 
	{
		g[2]++;   
	for (i=1;i<=mon-1;i++) s+=g[i];
	s+=day;
	g[2]--;
	}
	else
	{for (i=1;i<=mon-1;i++) s+=g[i];
	s+=day;}
	return(s);
}
int main()
{


	int u=0,year,a,b,c,d,e,f,g[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	int i,j;
	if (a==d) u+=add(g,a,e,f)-add(g,a,b,c);
	else
	{
	if (judge(a)) u+=366-add(g,a,b,c);
	else u+=365-add(g,a,b,c);
	for (i=a+1;i<=d-1;i++) {if (judge(i)) u+=366; else u+=365;}
    u+=add(g,d,e,f); 
	}
	printf("%d",u);
}
	