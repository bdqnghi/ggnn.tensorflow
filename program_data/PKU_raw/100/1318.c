int main()
{
    char a[310],b[27]="abcdefghijklmnopqrstuvwxyz";
    int i,j,p,c[27]={0},q=0;
    scanf("%s", a);
    p=strlen(a);
    for(j=0;j<=25;j++)
    {
                      for(i=0;i<p;i++) if(a[i]==b[j]) c[j]++;
                      if(c[j]!=0) {printf("%c=%d\n", b[j], c[j]);q++;}

    }
if(q==0) printf("No");
    return 0;
}
