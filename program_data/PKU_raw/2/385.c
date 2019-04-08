struct {
int num;
char w[26];

}book[999],test[1];



int main(int argc, char* argv[])
{  
   int m,i,j,n,s;
   char x,c;
   scanf ("%d",&m);
   for (i=0;i<m;i++)
   {
   scanf ("%d%s",&book[i].num,book[i].w);
   
   
   }

   x='A';
   n=0;
   c='A';
   while (1)
   {
    s=0;
   for (i=0;i<m;i++)
   {
    for (j=0;j<strlen(book[i].w);j++)
	{
	 if (book[i].w[j]==x)
	 {s++;}
	
	
	}
   }
   
   if (s>n)
   {
   n=s;
   c=x;
   }
   if (x=='Z') {break;}
   x++;
   }
   printf ("%c\n%d\n",c,n);
   for (i=0;i<m;i++)
   {
    for (j=0;j<strlen(book[i].w);j++)
	{
	 if (book[i].w[j]==c)
	 {
		 printf ("%d\n",book[i].num);
		
	 }
	
	
	}
   }
	return 0;
}

