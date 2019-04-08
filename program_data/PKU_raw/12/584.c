
int main()
{
int i, NO, tmp, a[101];
while(1)
{
scanf("%d",&tmp);
if(tmp == -1) break;
NO = 0;
for(i = 0; i < 101; i++)
a[i] = 0;
a[tmp] = 1;
while(scanf("%d",&tmp)==1&&tmp)
a[tmp] = 1;
for(i = 0; i < 50; i++)
if(a[i]&&a[2*i])
NO++;
printf("%d\n",NO);
}
return 0;
}