void turn(char *a)
{
    char b[10][20],c[20]="";
    int i,j=0,k,l;
    for(i=0;a[i];i++)
        if(a[i]==' '){
            k=i;
            while(a[k-1]!=' '&&k!=0)
            k--;
            for(l=0;k<i;k++,l++)
                b[j][l]=a[k];
            b[j][l]='\0';
            j++;
        }
        k=i;
        while(a[k-1]!=' '&&k!=0)
            k--;
        for(l=0;k<i;k++,l++)
            b[j][l]=a[k];
        b[j][l]='\0';
        j++;
        strcpy(a,c);
        for(i=j-1;i>=0;i--){
            strcat(a,b[i]);
            if(i!=0)
                strcat(a," ");
            if(i==0)
                strcat(a,"\0");
    }
}
main()
{
    char a[20];
    gets(a);
    turn(a);
    puts(a);
}