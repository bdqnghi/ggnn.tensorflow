int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++){
int days[] = { 0, 31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };
int y, m, d, i,c=0,q=0;
scanf("%d%d%d", &y,&m,&d);
if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
days[2]++;
for (i = 1; i < m; i++)
c += days[i];
for (i = 1; i < d; i++)
q += days[i];
if(c>q)
c=c-q;
else
c=q-c;
if(c%7==0)
printf("YES\n");
else
printf("NO\n");}
}
