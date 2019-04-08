int main()
{
    void align(char a[]);
    void substract(char a[],char b[],char c[]);
    char a[101],b[101],c[101];
    int i,j,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    getchar();
                    gets(a);
                    gets(b);
                    align(a);
                    align(b);
                    substract(a,b,c);
                    for(j=0;j<100;j++)if(c[j]!='0'){t=j;break;}
                    for(j=0;j<100-t;j++)c[j]=c[j+t];
                    c[100-t]='\0';
                    puts(c);
}
                    
}
void align(char a[])
{
     int jump,m;
a[100]='\0';
jump=100-strlen(a);
for(m=100-jump;m>0;m--)
a[m+jump-1]=a[m-1];
for(m=0;m<jump;m++)
a[m]='0';
}
void substract(char a[],char b[],char c[])
{
               int i,carry=0;
               for(i=99;i>=0;i--)
               {
                                 if(carry+b[i]>a[i]){c[i]=a[i]+10-(b[i]+carry)+'0';carry=1;}
                                 else{c[i]=a[i]-(b[i]+carry)+'0';carry=0;}
               }
}
