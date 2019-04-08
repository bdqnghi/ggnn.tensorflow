int main() 
{ 
int n,m,c;

scanf("%d",&n);
while(n--)
{
scanf("%d",&m);
int*shuzu=(int*)malloc(sizeof(int)*m);
c=0;
for(int i=0;i<m;i++)
{
scanf("%d",&shuzu[i]);
if(c+shuzu[i]<60)
if(c+shuzu[i]+3<60)
c+=3;
else
c=60-shuzu[i];
}
free(shuzu);
printf("%d\n",60-c);
}
return 0; 
}