int main()
{
    char a[100];
    gets(a);
    int l=strlen(a);
    for(int i=0;i<=l-1;i++)
    {
    	if((a[i]==' ')&&(a[i+1]==' ')) 
     	{   i++;
     	    while((a[i]==' ')&&(a[i+1]==' ')){i++;}
        	printf("%c",a[i]);
		}
     	else 
     	{
			printf("%c",a[i]);
		}
    }
    int y=0;
	scanf("%d",&y);
    return 0;
}
 
