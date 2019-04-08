int main()
{
    char w[1000],s[300][50];
    int i=0,j=0,k=0,a[100];
    gets(w);
    while(w[i]!='\0')
	{
       while(w[i]!=' '&&w[i]!='\0')
	   {
          s[j][k]=w[i];
          i++;
          k++;
	   }
       s[j][k]='\0';
       j++;

	   k=0;
       while(w[i]==' ')
	   {
          i++;
	   }
	}
for(i=0;i<j;i++)
{a[i]=strlen(s[i]);}
printf("%d",a[0]);
for(i=1;i<j;i++)
{printf(",%d",a[i]);}
return 0;
}