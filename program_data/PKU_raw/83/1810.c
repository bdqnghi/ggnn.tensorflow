int main()
{
int n,i;
float b[10], a[10],c[10],GPA,sum1=0,sum2=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
for(i=0;i<n;i++)
{
scanf("%f",&b[i]);
        if(90<=b[i])
  	    c[i]=4.0;
        if(b[i]>=85&&b[i]<=89)
		c[i]=3.7;
		if(b[i]>=82&&b[i]<=84)
		c[i]=3.3;
        if(b[i]>=78&&b[i]<=81)
		c[i]=3.0;
		if(b[i]>=75&&b[i]<=77)
		c[i]=2.7;
        if(b[i]>=72&&b[i]<=74)
		c[i]=2.3;
		if(b[i]>=68&&b[i]<=71)
		c[i]=2.0;
		if(b[i]>=64&&b[i]<=67)
		c[i]=1.5;
		if(b[i]>=60&&b[i]<=63)
		c[i]=1.0;
		if(b[i]<=60)
		c[i]=0;
		sum1+=c[i]*a[i];
        sum2+=a[i];
}
GPA=sum1/sum2;
printf("%.2lf",GPA);
return 0;
}
