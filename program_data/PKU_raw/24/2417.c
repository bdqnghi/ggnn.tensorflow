int main()
{
    int min=0,max=0,minpl=0,maxpl=0,k;
    char a[2000]={0};
    gets(a);
    int l=strlen(a),i=0,j;
    for(j=0;a[i+j]!=' '&&a[i+j]!=','&&a[i+j]!=0;j++);
    max=min=j;

    for(i=j+1;i<l;i+=j+1)
    {
        for(j=0;i+j<l;j++)
            if(a[i+j]==' '||a[i+j]==','||a[i+j]==0)break;

        if(j>max){max=j;maxpl=i;}
        if(j<min&&j!=0){min=j;minpl=i;}
    }
    for(k=0;k<max;k++)putchar(a[maxpl+k]);

    printf("\n");
    for(k=0;k<min;k++)putchar(a[minpl+k]);

    printf("\n");

}
