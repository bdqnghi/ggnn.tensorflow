int main()
{
int n,year,leap,i,m,d,re,q,s;
scanf("%d",&n);
for(int j=0;j<n;j++)
{
scanf("%d%d%d",&year,&m,&d);
if(m>d)
{s=m;
m=d;
d=s;}
if(year%4==0)
{    if(year%100==0)
{         if(year%400==0)
             leap=1;
            else leap=0;}
                else leap=1;}
                    else leap=0;
               if(leap==1)
			   {int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
                 
                       for(int k=m;k<d;k++)
					   {   
						   q+=month[k-1];
					   }
                  if(q%7==0)
				  {re=1;}
                   else 
	                 re=0;}
                  else 
				  {int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
                         	 
                       for(int k=m;k<d;k++)
					   {   
						   q+=month[k-1];
					   }
                       if(q%7==0)
					   {re=1;}
                           else 
	                        re=0;}
				            q=0;
if(re==1)
printf("YES\n");
else
printf("NO\n");
}
return 0;}