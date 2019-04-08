int main()
{
int s_n[128];
char n_s[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char in[255],out[255]="0";

int i,from,to,len=0;
long num=0;

for(i='0';i<='9';i++)
{s_n[i]=i-'0';}
for(i='A';i<='Z';i++)
{s_n[i]=i-'A'+10;}
for(i='a';i<'z';i++)
{s_n[i]=i-'a'+10;}

scanf("%d %s %d",&from,in,&to);
for(i=0;in[i]!='\0';i++)
{num=num*from+s_n[in[i]];}

len=(num==0)?1:0;
while(num>0)
{
out[len++]=n_s[num%to];
num=num/to;
}
for(i=len-1;i>=0;i--)
{
printf("%c",out[i]);
}
return 0;
}
