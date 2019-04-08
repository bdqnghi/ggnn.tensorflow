int main()
{
char a[50],b[50],c[50];
int i,j,m,s,t=0;
scanf("%s %s",a,b);
int l=strlen(a);
for(i=0;b[i]!='\0';i++)
{
	if(b[i]==a[0])
	{   c[0]=a[0];
            m=i+1;
	    for(j=1;j<l;j++)
		{
             c[j]=b[m];m++;
        }
		c[j]='\0';
	
	}
        s=strcmp(a,c);
        if(s==0)
        {t++;}
        if(t==1)
        {printf("%d",i);}

}
return 0;
}

