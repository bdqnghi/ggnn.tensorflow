void main()
{
	int i,j[50],t,a=0,b=0;
	float GPA;
	scanf("%d",&i);
		for(t=0;t<2*i;t++)
		scanf("%d",&j[t]);
for(t=i;t<2*i;t++)
{	if(j[t]>=90)j[t]=40 ;
else if (j[t]>=85&&j[t]<=89)  j[t]=37;
else if (j[t]>=82&&j[t]<=84)  j[t]=33; 
else if (j[t]>=78&&j[t]<=81)  j[t]=30; 
else if (j[t]>=75&&j[t]<=77)  j[t]=27; 
else if (j[t]>=72&&j[t]<=74)  j[t]=23; 
else if (j[t]>=68&&j[t]<=71)  j[t]=20; 
else if (j[t]>=64&&j[t]<=67)  j[t]=15; 
else if (j[t]>=60&&j[t]<=63)  j[t]=10;
else j[t]=0; }
for(t=0;t<i;t++)
j[t+i]=j[t]*j[t+i];
for(t=0;t<i;t++)
{   a=a+j[t+i];
b=b+j[t];}
GPA=(float)a/10.0/b;
printf("%.2f",GPA);
}