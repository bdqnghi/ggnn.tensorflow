
struct abb{
	char c[6];
	int  num;
};


int main()
{
	int n,i,j,len,q;
	char s[600];

	struct abb acc[300];
	struct abb add;

    scanf("%d",&n);

	scanf("%s",s);

	len=strlen(s);

	for(i=0;i<=len-n;i++)
	{
		q=0;
		for(j=i;j<i+n;j++)
		{
			acc[i].c[q]=s[j];
			q++;
		}
		acc[i].c[q]='\0';
		acc[i].num=1;
		
	}


	for(i=0;i<=len-n;i++)
		for(j=i+1;j<=len-n;j++)
			if(strcmp(acc[i].c,acc[j].c)==0)
				acc[i].num++;


   for(i=1;i<=len-n;i++)
	   for(j=0;j<=len-n-1;j++)
		   if(acc[j].num<acc[j+1].num)
		   {
			   add=acc[j];
			   acc[j]=acc[j+1];
			   acc[j+1]=add;
		   }

   i=0;
   if(acc[i].num!=1){
   printf("%d\n",acc[i].num);
   printf("%s\n",acc[i].c);

   while(acc[i+1].num==acc[i].num)
   { printf("%s\n",acc[i+1].c);
   i++;}
   }

   else
	   printf("NO");
   return 0;
}


