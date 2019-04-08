
int main()
{
int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
char * weekdays[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int y,m,d,w,i;
scanf("%d %d %d",&y,&m,&d);
w=1*(y-1)+(y-1)/4-(y-1)/100+(y-1)/400+d;
for(i=1;i<m;i++)
w+=days[i-1];
if((y%4==0&&y%100!=0)||y%400==0&&(m>2))
w++;

printf("%s.\n", weekdays[w%7]);

return 0;
}
