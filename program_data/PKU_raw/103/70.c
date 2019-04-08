int main()
{
    char a[1001];
    int i,j,l,y;
    int x[100]={0};
    scanf("%s",a);  
    l=strlen(a);
    for(i=0;i<l;i++)
    {if(a[i]>='a'&&a[i]<='z') a[i]=a[i]-'a'+'A';}
    for(i=0;i<l;i++)
    {y=a[i]-'A';
     x[y]++;
     if(a[i]==a[i+1]) continue;
     else
     {printf("(%c,%d)",a[i],x[y]);
       x[y]=0;
      }}
    getchar();
    getchar();
    getchar();
}
