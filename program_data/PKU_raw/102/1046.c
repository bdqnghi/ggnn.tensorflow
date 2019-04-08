int main()
{
	int i,a,b,n,k;
	char m[40][8];
	double male[40],female[40],p;
scanf("%d",&n);
a=0;b=0;
for(i=0;i<n;i++)
{
	scanf("%s %lf",m[i],&p);
	if(strcmp(m[i],"male")==0)
	{
		male[a]=p;
		a++;
	}
	else if(strcmp(m[i],"female")==0)
	{
		female[b]=p;
		b++;
	}
}
for(k=a-1;k>0;k--)
for(i=0;i<k;i++){
	if( male[i]>male[i+1])
	{
		double tmp;
		tmp=male[i+1];
		male[i+1]=male[i];
		male[i]=tmp;
	}
}
for(k=b-1;k>0;k--)
for(i=0;i<k;i++){
	if( female[i]>female[i+1])
	{
		double tmp;
		tmp=female[i+1];
		female[i+1]=female[i];
		female[i]=tmp;
	}
}
printf("%.2lf",male[0]);
for(i=1;i<a;i++)
printf(" %.2lf",male[i]);
for(i=b-1;i>=0;i--)
printf(" %.2lf",female[i]);
return 0;
}