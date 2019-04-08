
int main(void)
{
    char a[255]="",b[255]="",f[255]="";
    int i,j,m,n,p,q,x,y;
    int c[255]={0},d[255]={0},e[255];
    scanf("%s",a);
    scanf("%s",b);
    i=0;while(a[i]=='0'){i++;}
    j=0;while(b[j]=='0'){j++;}
    for(x=0;x<255-i;x++)
    {a[x]=a[x+i];}
    for(y=0;y<255-j;y++)
    {b[y]=b[y+j];}
    if(a[0]=='\0'&&b[0]=='\0')
    {printf("0");}
    else
    {
    i=strlen(a);
    j=strlen(b);
    for(m=0;m<i;m++)
    {c[m]=a[i-1-m]-'0';}
    for(n=0;n<j;n++)
    {d[n]=b[j-1-n]-'0';}
    e[0]=c[0]+d[0];
    for(p=1;p<255;p++)
    {e[p]=c[p]+d[p]+e[p-1]/10;}
    for(p=0;p<255;p++)
    {e[p]=e[p]%10;}
    q=254;while(e[q]==0){q--;}
    for(x=0;x<q+1;x++)
    {f[x]=e[q-x]+'0';}
    printf("%s\n",f);
    }
      
}
