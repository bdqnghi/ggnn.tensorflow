int main()
{
int y,m,d;
scanf("%d%d%d",&y,&m,&d);
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if (y%4==0 && y%100!=0 || y%400==0) days[1]=29;
int s=y-1+(y-1)/4-(y-1)/100+(y-1)/400;
int i;
for (i=1; i<m; i++) s+=days[i-1];
s+=d;
char xq[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
printf("%s\n",xq[s%7-1]);
return 0;
}