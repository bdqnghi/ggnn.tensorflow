main()
{

int t,i=1,m;
scanf("%d",&t);
while(i<=t)
{char zifu[100000],q='0';
scanf("%s",&zifu);
m=strlen(zifu);
int k=0,j=0;
while(k<=m-2)
{j=0;
	while(j<=m-1&&q=='0')
	{if(zifu[k]==zifu[j]&&k!=j)
break;
else
j++;}
if(j==m)
{
q=zifu[k];
break;}
else
k++;
}
if(q=='0')
printf("no\n");
else
printf("%c\n",q);


i++;}}
