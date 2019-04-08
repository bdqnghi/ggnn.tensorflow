int main()
{
    char a[500];
    int len,  b[500],i,k,max,min,p=0,q=0;
    gets(a);
    len=strlen(a);
    k=0;
    for(i=0;i<len;i++)
        {
            if(a[i]==' '||a[i]==',')b[k]=i,k++;
        }
        b[k]=i;
    max=b[0]+1;
    min=b[0]+1;
    for(i=0;i<k;i++)
     {
         if(b[i+1]-b[i]>max){max=b[i+1]-b[i];p=i;}
         else if(b[i+1]-b[i]<min&&b[i+1]-b[i]>1){min=b[i+1]-b[i];q=i;}
     }
     if(max==b[0]+1)
     {
         for(i=0;i<b[0];i++)
         printf("%c",a[i]);
     }
     else
     {
         for(i=b[p]+1;i<b[p+1];i++)
         printf("%c",a[i]);
     }
        printf("\n");
        if(min==b[0]+1)
     {
         for(i=0;i<b[0];i++)
         printf("%c",a[i]);
     }
     else
     {
         for(i=b[q]+1;i<b[q+1];i++)
         printf("%c",a[i]);
     }

}