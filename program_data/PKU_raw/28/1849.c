int main()
{


char s[N];
gets(s);
int n,i,j=0,m=0,q=0;
n=strlen(s);
for(i=0;i<n;i++)
{
    if(s[i]!=' ')
    {

        j ++;
    }
    else
    {
        if(s[i+1]==' ')
        continue;
        q++;
        if(q==1)
        printf("%d",j);
        else if(q>1)
           printf(",%d",j);
        j=0;
    }
if(i==n-1)
 {
     if(q==0)
      printf("%d",j);
      else
      printf(",%d",j);
 }

}
return 0;
}
