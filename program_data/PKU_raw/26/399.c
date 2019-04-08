int main ()
{
    char string[105];
    gets (string);
    int l,i,j;
    l=strlen (string);
    for (i=0;i<l;i++)
    {
        if (string[i]==' ' && string[i+1]==' ')
        {
            for (j=i;j<l;j++)
            {
                string[j]=string[j+1];
            }
            i=i-1;
        }
    }
    printf ("%s",string);
    getchar ();
    getchar ();
}
    
