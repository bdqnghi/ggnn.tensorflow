int main()
{
char t[256],s[256],r[256];
int lt,ls,i=0,j=0,p;
scanf("%s%s%s",s,t,r);
lt=strlen(t);
ls=strlen(s);
while(i<lt&&j<ls)
{
if(t[i]==s[j])
{
i++;
j++;
}
else{
j=j-i+1;
p=j;
i=0;
}
}
if(i==lt) 
for(i=0;i<lt;i++)
{
s[i+p]=r[i];
}
printf("%s",s);
return 0;
}
