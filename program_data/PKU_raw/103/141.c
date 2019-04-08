int main ()
{
char str[1000],i,m=1,n;
scanf ("%s",str);
for (i=0;i<=100;i++)
{
if (str[i]<='z' && str[i]>='a')
str[i]=str[i]+'A'-'a';
}
i=0;
for (i=0;i<=999;i++)
{
    if (str[i]=='\0')
    {n=i-1;break;}
}
for (i=0;i<=n;i++)
{
    if (str[i]==str[i+1])
    {m=m+1;}
    else
    {printf ("(%c,%d)",str[i],m);m=1;continue;}

}
return 0;
}