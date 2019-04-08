void main()
{
    char *p1,*p2,*p3,*p,*q;
    int i,j,k;
    p1=(char*)malloc(100*sizeof(char));
    p2=(char*)malloc(100*sizeof(char));
    p3=(char*)malloc(100*sizeof(char));
    q=(char*)malloc(100*sizeof(char));
    gets(p1);
    gets(p2);
    gets(p3);
    p=strstr(p1,p2);
    if(p==0)printf("%s",p1);
    else{
    for(i=0;*(p1+i)!='\0';i++)
    {
        *(q+i)=*(p1+i);
        if(p1+i==p) break;
    }
    for(j=0;*(p3+j)!='\0';j++)
        *(q+i+j)=*(p3+j);
    for(k=i+strlen(p2);*(p1+k)!='\0';k++,j++)
    *(q+i+j)=*(p1+k);
    *(q+i+j)='\0';
    printf("%s",q);}
}