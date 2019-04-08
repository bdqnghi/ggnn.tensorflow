

struct book
{
	int number;
	char name[26];
	int num[26];
}; 
void mostbook(struct book *p)
{
   int i,j,k;
   k=strlen(p->name);
   for(j=0;j<26;j++)			//???num???
   {
	   p->num[j]=0;
   }
   for(i=0;i<k;i++)
		 (p->num[(p->name[i]-'A')])++;
}


void main()
{
   int i,j,m;
   int max=0;
   int maxi=0;
   int s[26]={0};
   //printf("???????:\n");
   scanf("%d",&m);
   struct book *p;
   p=(struct book *)malloc(m*sizeof(struct book));
      for(i=0;i<m;i++)
   {
	 // printf("????????\n");
      scanf("%d",&(p+i)->number);
	  scanf("%s",&(p+i)->name);
	  mostbook(p+i);
      for(j=0;j<26;j++)
	    s[j]+=((p+i)->num[j]);
	}
   for(i=0;i<26;i++)
   {
	   if(s[i]>=max)
	 {
		 max=s[i];
         maxi=i;
	 }
   }
   //printf("????????\n");
   printf("%c\n",(maxi+'A'));
   //printf("?????\n");
   printf("%d\n",max);
   //printf("?????\n");
   for(i=0;i<m;i++)
   {
	  int k,j;
	  k=strlen((p+i)->name);             //??i?book??
	  for(j=0;j<k;j++)
	  {
		 if((p+i)->name[j]==(maxi+'A'))  //??i?book??
		 {
			 printf("%d\n",(p+i)->number);
			 continue;				//????????????????continue
		 }
	  }
   }

}

