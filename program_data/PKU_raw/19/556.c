int main()
{
	int i,m,j,k=0;
	char s[100][100]={0},a[100],b[100],str[1000];
	char *ps[100],*pa,*pb;
	
	for(i=0;i<100;i++)
	*(ps+i)=s[i];
	pa=a;
	pb=b;
	gets(str);
	gets(pa);
	gets(pb);i=0;
	do{
	    for(j=0;*(str+k)!=' '&&*(str+k)!='\0';j++)
	    {*(*(ps+i)+j)=*(str+k);
		k++;}
		*(*(ps+i)+j)='\0';
		i++;k++;
	}while(*(str+k)!='\0');
	*(*(ps+i-1)+j)='\0';
	m=i;
	for(i=0;i<m;i++)
	  {if(!strcmp(*(ps+i),pa)) strcpy(*(ps+i),pb);}
	  
for(i=0;i<m;i++)
	{ if(i==0) 
		printf("%s",*(ps+i));
else printf(" %s",*(ps+i));
	}
	printf("\n");
	return 0;
}