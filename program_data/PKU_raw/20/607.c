void main()
{    int j=0,i,ceshi,max,weizhi;
    char str[30][10]={'\0'},substr[30][3]={'\0'},xin[30][13]={'\0'},*dizhi[30];
    char *a,*b,*c;
    while(scanf("%s %s",str[j],substr[j])!=EOF)
    {j++;}
    ceshi=j;
    

for (j=0;j<ceshi;j++)
{    
	dizhi[j]=str[j];
	weizhi=1;
	max=*(dizhi[j]);
	for (i=0;str[j][i]!='\0';i++)
    {
        if(*(str[j]+i)>max)
        {
            max=*(str[j]+i);weizhi=i+1;
        }
    }
   
         a=&str[j][0];b=&substr[j][0];c=&xin[j][0]; 
   
    for (i=0;i<weizhi;i++)
    {
        *(c+i)=*(a+i);
    }
    
    for (i=weizhi;i<weizhi+3;i++)
    {
        *(c+i)=*(b+i-weizhi);
    }
    
    for (i=weizhi;str[j][i]!='\0';i++)
    {
        *(c+3+i)=*(a+i);
    }
    
    for (i=0;xin[j][i]!='\0';i++)
    {
        printf("%c",*(c+i));
    }
    printf("\n");
}
}
