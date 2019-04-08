int main()
{
int n, i,shu[300],he=0,j;
double a;
scanf ("%d", &n);
for (i=0; i<n; i++)
	{
scanf ("%d", &shu[i]);
he=he+shu[i];}
a = (double)he / n;
for (i=0;i<n;i++)
{ for (j=n-1;j>=1;j--)
{ int t;
if (shu[j-1]>shu[j]){
t = shu[j-1];
shu[j-1]=shu[j];
shu[j]=t;}
}
}
if ((a-shu[0])>(shu[n-1]-a))
printf ("%d", shu[0]);
else if ((a-shu[0])<(shu[n-1]-a))
printf ("%d", shu[n-1]);
else if ((a-shu[0])==(shu[n-1]-a)&&shu[0]!=shu[n-1])
printf ("%d,%d", shu[0], shu[n-1]);
return 0;
}

		