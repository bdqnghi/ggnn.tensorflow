char ch(char a)
{
char c;
if(a>='A'&&a<='Z')c='A'-10;
else if(a>='a'&&a<='z')c='a'-10;
else c='0';
return c;
}
void main()
{
int a,b,i,j;
long sum=0;
char n[32]="\0",m[32]="\0",c;
scanf("%d ",&a);
for(i=0;i<32;i++){scanf("%c",&n[i]);if(n[i]==' ')break;}
scanf("%d",&b);
for(j=0;j<i;j++)sum=sum*a+n[j]-ch(n[j]);
for(j=0;j<32;j++){c='0';if(sum%b>9)c='A'-10;m[j]=sum%b+c;sum=sum/b;if(sum==0)break;}
for(i=0;i<=j;i++)printf("%c",m[j-i]);
}