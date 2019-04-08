int main()
{
int n,s[100],z[100],i,j=0,a=0;
scanf ("%d", &n);
for (i=0;i<=n-1;++i)
{
scanf ("%d %d", &s[i],&z[i]);
}
for (i=0;i<=n-1;++i)
{
if (90<=s[i]&&s[i]<=140&&60<=z[i]&&z[i]<=90)
{
j=j+1;
}
else
{
if (a<=j)
{
a=j;
}
j=0;
}
}
if (a<=j)
{
	a=j;
}
printf ("%d", a);
return 0;
}