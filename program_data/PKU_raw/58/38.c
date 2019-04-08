void main()

{int n,i,j,k;
char *p[100],s[100][82];
scanf("%d",&n);
getchar();
for(i=0;i<n;i++)
{
gets(s[i]);

k=0;
p[i]=s[i];
{if(((int)*p[i]>64&&(int)*p[i]<91)||((int)*p[i]>96&&(int)*p[i]<123)||*p[i]=='_')
k=k+0;
else
k=k+1;
}
p[i]++;

for(;*p[i]!='\0';p[i]++)
{

if(((int)*p[i]>64&&(int)*p[i]<91)||((int)*p[i]>96&&(int)*p[i]<123)||*p[i]=='_'||((int)*p[i]>47&&(int)*p[i]<58))
k=k+0;
else
k=k+1;}

if(k==0)
printf("1\n");
else if(k>0)
printf("0\n");

}
}

