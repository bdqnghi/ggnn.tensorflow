void main()
{
   int i,j,w;
   char a[100]={0},b[100]={0},c[100]={0},d[100][100]={'\0'};
   gets(a);gets(b);gets(c);
   char *pc,*pa,*pb,(*pd)[100];
   pa=&a[0];pb=&b[0];pc=&c[0];pd=d;
   int k=0,ll=strlen(c);
   for(i=0;;i++)
   {
	   for(j=0;*(pa+k)!=' ';j++)
	   {
           if(*(pa+k)=='\0')
		   {
				(*(*(pd+i)+j))=(*(pa+k));
				break;
		   }
		   (*(*(pd+i)+j))=(*(pa+k));k++;
	   }
       (*(*(pd+i)+j))='\0';
	   	if ((*(pa+k))=='\0')
			break;
		k++;
   }
   int count=i+1;
   for(i=0;i<count;i++)
   {
	   int l=strlen(d[i]);
	   for(j=0;j<l+1;j++)
       {
			if ((*(*(pd+i)+j))==(*(pb+j)))
			{
				w=1;
				continue;
			}
			else
			{
				w=0;
				break;
			}
		}
		if (w)
		{
			for (k=0;k<ll;k++)
			{
				(*(*(pd+i)+k))=(*(pc+k));
			}
			(*(*(pd+i)+k))='\0';
		}
		else
			continue;
   }
   for (i=0;i<count;i++)
	{
		if (i>0)
			printf(" ");
		printf("%s",d[i]);
	}
	printf("\n");
}
 


