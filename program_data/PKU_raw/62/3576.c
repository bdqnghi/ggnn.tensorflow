int main ()
{
    int i=0,j=0,x;
    char a[200],b[200];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' '){b[j]=a[i];
        j++;
        }
        else if(a[i]==' '){
        for(x=0;a[i]==' ';i++)
        {
            x++;
        }
        if(x>=1){b[j]=' ';
        j++;
        i=i-1;
        }
        }
    }
    b[j]='\0';
    printf("%s",b);
    return 0;
}