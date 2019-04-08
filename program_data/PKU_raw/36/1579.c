void bubble_sort(char s[],int l)
{
    int i,j;
    char t;
    for(i=0;i<l-1;i++)
        for(j=0;j<l-1-i;j++)
            if(s[j]>s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
}
int main()
{
    char s[502],a[502],b[502];
    int l,i;
    gets(s);
    l=strlen(s)/2;
    for(i=0;i<l;i++) {a[i]=s[i];b[i]=s[l+i+1];}
    a[l]='\0';
    b[l]='\0';
    bubble_sort(a,l);
    bubble_sort(b,l);
    if(strcmp(a,b)) printf("NO\n");
        else printf("YES\n");
}
