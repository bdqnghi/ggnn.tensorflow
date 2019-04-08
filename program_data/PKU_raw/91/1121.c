int main()
{char zi[105],shuzu[105];
int i,j;
gets(zi);
for(i=0;i<=strlen(zi)-1;i++)
{shuzu[i]=zi[i]+zi[i+1];}
shuzu[i-1]=zi[0]+zi[i-1];
for(i=0;i<=strlen(zi)-1;i++)
{printf("%c",shuzu[i]);}





 
getchar();
getchar();

}   