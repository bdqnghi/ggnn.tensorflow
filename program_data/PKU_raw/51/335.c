int main()
{
    int n;scanf("%d\n",&n);
    char a[250];gets(a); int len=strlen(a);int i=0,j=0,k=0,v[250]={0};char b[250][5]={0};
    for(i=0;i<=len-n;i++)
    {

        for(j=i;j<i+n;j++)
        {
            b[k][j-i]=a[j];
        }k++;
    }
   /* for(i=0;i<=len-n;i++)
    {
        printf("%s\n",b[i]);
    }*/
    int m=v[0];
  for(j=0;j<k;j++)
	{
		for(i=j;i<k;i++)
		{
			if(!strcmp(b[j],b[i]))v[j]++;
		}
        
	}
 /*   for(i=0;i<=len-n;i++)
    {
        printf("%d ",v[i]);
    }*/
    for(i=0;i<k;i++)
    {
        if(v[i]>m)
        {
            m=v[i];
        }
    }
    if(m>1)
    {


    printf("%d\n",m);
    for(i=0;i<k;i++)
    {
        if(v[i]==m)
        {
            printf("%s\n",b[i]);
        }
    }
    }
    else{printf("NO");}
    return 0;
}