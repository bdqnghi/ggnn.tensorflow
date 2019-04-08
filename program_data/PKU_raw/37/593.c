main()
{
int t,i,j,k;
char s[100000]={0};
char A[100] = {0};
scanf("%d",&t);
getchar();
for(i=0;i<t;i++)
{
gets(s);

j = 0;
while(s[j])
{
for(k=0;k<strlen(s);k++)
if(s[k]==s[j]&&k!=j)
{
 break;
}

if(k==strlen(s))
{
A[i] = s[j];break;
}

j++;

}//while

}//for t

for(i=0;i<t;i++)
{
if(A[i]==0)printf("no\n");
else printf("%c\n",A[i]);

}




}