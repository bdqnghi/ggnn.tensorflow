int main()
{
    char zfc[5000],jz[5000];
    int i,k=1,n;
    gets(zfc);
    n=strlen(zfc);
    jz[0]=zfc[0];
    for(i=1;i<n;i++)
    {
        if(zfc[i]!=' ')
        {
            jz[k]=zfc[i];
            k++;
        }
        if(zfc[i-1]!=' '&&zfc[i]==' ')
        { 
            jz[k]=zfc[i];
            k++;
        } 
        if(zfc[i-1]==' '&&zfc[i]==' ')
        {
        }
        if(zfc[i-1]=='.'&&zfc[i]==' ')
        {
        }
    } 
    puts(jz);         	
 return 0;
   
} 