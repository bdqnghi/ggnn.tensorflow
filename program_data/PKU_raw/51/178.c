int main()
{
	int m,n,i,j,k=0;
	char a[1000],b[1000][5],c[5];
	int num[1000];
	for(i=0;i<1000;i++)
		num[i]=0;
    scanf("%d\n",&n);
	gets(a);
	for(i=0;;i++)
	{
		for(j=i;j<=i+n-1;j++)
		{
			
			if(a[j]=='\0')goto loop;
			b[k][j-i]=a[j];
		}k++;
		b[k-1][n]='\0';
	}loop:;
	
	//printf("%d\n",k);
	
	//puts(b[1]);
	for(i=0;i<k-1;i++)
		for(j=i+1;j<k;j++)
		{
          if(strcmp(b[i],b[j])==0)num[i]++;
		}

		for(i=k-2;i>0;i--)
			for(j=0;j<i;j++)
			{
				if(num[j]<num[j+1])
				{	strcpy(c,b[j]);strcpy(b[j],b[j+1]);strcpy(b[j+1],c);
				    m=num[j];num[j]=num[j+1];num[j+1]=m;
				}
			}
if(num[0]==0)
printf("NO");
else{

			printf("%d\n",num[0]+1);
    puts(b[0]);
 for(i=1;;i++)
 {
	if(num[i]==num[0]){puts(b[i]);}
	else break;
 }
	
}

}