int main(void)
{
char ori[101],temp[4],res[100];
int i=1,t,s;
scanf("%s",ori);
temp[0]=ori[0];temp[1]=ori[1];temp[2]='\0';
if(atoi(temp)<13)
{
if(atoi(temp)<10)
{
printf("0\n%d\n",atoi(temp));
return 0;
}
temp[2]=ori[2];temp[3]='\0';
i=2;
}
t=atoi(temp);
for(s=i;ori[i]!='\0';i++)
{
res[i-s]=t/13+'0';
temp[0]=ori[i+1];temp[1]='\0';
if(ori[i+1]=='\0')
t=t%13;
else
t=(t%13)*10+atoi(temp);
}
if(i==s)
{
res[0]='0';
i++;
}
res[i-s]='\0';
printf("%s\n%d\n",res,t);
return 0;
}