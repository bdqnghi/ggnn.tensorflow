int main()
{
int judge(int s,int e,char a[]);
void print(int s,int e,char a[]);
int n,m=1,i,j;
char a[500];
scanf("%s",a);
n=strlen(a);
//printf("%d \n",n);
//printf("%s \n",a);
for(i=1;i<=n-1;i++)
{
    for(j=0;j<=n-i-1;j++)
    {
    int q;
    q=judge(j,j+i,a);
    if(q==1&&m==1)
        {print(j,j+i,a);m++;}
    else if(q==1&&m!=1)
        {printf("\n");print(j,j+i,a);}
    }

}
return 0;
}
int judge(int s,int e,char a[500])
{
    if (s >= e) return 1;
    else if(a[s]!=a[e])
    return 0;
    else if(a[s]==a[e])
    {
        s++;e--;
        return judge(s,e,a);
    }
}
void print (int s,int e,char a[])
{
    int i;
    for(i=s;i<=e;i++)
    printf("%c",a[i]);
}



