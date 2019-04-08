void read(int n1,int n2,int s1[],int s2[]);
void bubble_sort(int s[],int n);
void write(int n1,int n2,int s1[],int s2[]);
int main()
{
    int n1,n2,s1[101],s2[101];
    scanf("%d%d",&n1,&n2);
    read(n1,n2,s1,s2);
    bubble_sort(s1,n1);
    bubble_sort(s2,n2);
    write(n1,n2,s1,s2);

}
void read(int n1,int n2,int s1[],int s2[])
{
    int i;

    for(i=0;i<n1;i++) scanf("%d",&s1[i]);
    for(i=0;i<n2;i++) scanf("%d",&s2[i]);
}
void bubble_sort(int s[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(s[j]>s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
}
void write(int n1,int n2,int s1[],int s2[])
{
    int i;
    printf("%d",s1[0]);
    for(i=1;i<n1;i++) printf(" %d",s1[i]);
    for(i=0;i<n2;i++) printf(" %d",s2[i]);
}