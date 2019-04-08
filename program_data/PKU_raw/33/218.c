int main()
{
int a,b,c,i,k,m,n;
char sz[300];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",sz);
for(k=0;k<strlen(sz);k++)
{
switch(sz[k])
{
case 'A':
printf("T");
break;
case 'T':
printf("A");
break;
case 'C':
printf("G");
break;
case 'G':
printf("C");
break;
}
}
printf("\n");
}
return 0;
}