void main()
{
	int i,j,k,l,t,m;
	scanf("%d",&t);
	getchar();
    int *p=(int*)malloc(26*sizeof(int));
    char *s1=(char*)malloc(26*sizeof(char));
    char (*s)[100000];
    s=(char(*)[100000])calloc(t,100000*sizeof(char));
    for(i=0;i<t;i++)
	   gets(*(s+i));
    for(i=0;i<t;i++)
    {
        for(j=0;j<26;j++) *(p+j)=0;
        k=0;
        m=0;
	    for(j=0;*(*(s+i)+j)!='\0';j++)
	     (*(p+(int)(*(*(s+i)+j))-97))++; 
        for(j=0;j<26;j++)
        if(*(p+j)==1) 
        {
             *(s1+k)=(char)(j+97);
             k++;
             m=1;
        }
        if(m==0) printf("no\n");
        else if(m==1)
        {
            for(j=0;*(*(s+i)+j)!='\0';j++)
            {
                 for(l=0;l<k;l++)
                 if((int)(*(*(s+i)+j))==(int)(*(s1+l))) 
                 {
                     printf("%c\n",*(s1+l));
                     m=0;
                     break;
                 }
                 if(m==0) break;
            }
        }
    }
}