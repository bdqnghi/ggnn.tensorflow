int main()
{
int n,i,j,k;
char **p,c;

scanf("%d",&n);
c=getchar();
p=(char **)malloc(sizeof(char*)*1000);

for(i=0;i<n;i++)
{
		*(p+i)=(char*)malloc(sizeof(char)*80);
		gets(*(p+i));
}

for(i=0;i<n;i++)
{
	j=0;
	k=0;
	if(      ( *(*(p+i)+k)=='_'  )   ||    (   (*(*(p+i)+k)<=90)&&(*(*(p+i)+k)>=65)  )  ||   (   (*(*(p+i)+k)<=122)&&(*(*(p+i)+k)>=97)  ))    
	{
		do
		{
			if(      (  *(*(p+i)+k)=='_'  )   ||  (   (*(*(p+i)+k)>=48)&&(*(*(p+i)+k)<=57)  )  ||  (   (*(*(p+i)+k)<=90)&&(*(*(p+i)+k)>=65)  )  ||   (   (*(*(p+i)+k)<=122)&&(*(*(p+i)+k)>=97)  )   ) 		
			{
				j=1;
			}
			else {j=0;break;}			
            k++;
			if(j==0) break;
		}
		while(  *(*(p+i)+k)!='\0' );
	}
	printf("%d\n",j);
}
return 0;
}