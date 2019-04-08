int main()
{
int n,a,sum;
sum=0;
int an[10],cn[10];
double bn[10],sam,GPA;
sam=0.00;
scanf("%d",&n);
for(a=0;a<n;a++)
{
  scanf("%d",&cn[a]);
}
for(a=0;a<n;a++)
{sum+=cn[a];
}

for(a=0;a<n;a++)
{
	scanf("%d",&an[a]);
}
for(a=0;a<n;a++){
	if(an[a]>=90&&an[a]<=100)
		bn[a]=4.0;
	if(an[a]>=85&&an[a]<=89)
		bn[a]=3.7;
	if(an[a]>=82&&an[a]<=84)
		bn[a]=3.3;
	if(an[a]>=78&&an[a]<=81)
		bn[a]=3.0;
	if(an[a]>=75&&an[a]<=77)
		bn[a]=2.7;
	if(an[a]>=72&&an[a]<=74)
		bn[a]=2.3;
	if(an[a]>=68&&an[a]<=71)
		bn[a]=2.0;
	if(an[a]>=64&&an[a]<=67)
		bn[a]=1.5;
	if(an[a]>=60&&an[a]<=63)
		bn[a]=1.0;
	if(an[a]<60)
		bn[a]=0;
	
}
for(a=0;a<n;a++)
{
	
	sam+=cn[a]*bn[a];
}

GPA=sam/sum;
printf("%.2lf",GPA);
return 0;
}