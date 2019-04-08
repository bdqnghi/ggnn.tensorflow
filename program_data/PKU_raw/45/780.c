int main()
{
int i,j;
char a[50],b[50];
scanf("%s %s",a,b);
for(j=0;b[j]!= '\0';j++)
{
    i=0;
if(b[j]==a[i])
    {
        if(b[j+1]!=a[1])
continue;
        if(b[j++]==a[i++])
{
printf("%d",j-1);
return 0;
            }
    }
}
return 0;
}

