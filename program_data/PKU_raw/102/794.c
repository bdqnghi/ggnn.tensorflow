struct in
{
       float h;
}nan[41],nv[41];
int cmp1 (const void *a,const void *b)
{
    struct in *c=(struct in *)a;
    struct in *d=(struct in *)b;
    return ((c->h-d->h)>0)?1:-1;
}
int cmp2 (const void *a,const void *b)
{
    struct in *c=(struct in *)a;
    struct in *d=(struct in *)b;
    return ((-c->h+d->h)>0)?1:-1;
}

int main()
{
    int num;
    int i;
    char ssex[10]={'\0'};
    float hh;
    int numnan=0;
    int numnv=0;
    memset(nan,0,41);
    memset(nv,0,41);
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        scanf("%s %f",ssex,&hh);
        if (strcmp(ssex,"male")==0)
        {
           nan[numnan].h=hh;
           numnan++;
        }
        else
        {
            nv[numnv].h=hh;
            numnv++;
        }
        memset(ssex,'\0',10);
    }
    qsort(nan,numnan,sizeof(nan[0]),cmp1);
    qsort(nv,numnv,sizeof(nv[0]),cmp2);
    for (i=0;i<numnan;i++)
    {
        printf("%.2f ",nan[i].h);
    }
    for (i=0;i<numnv;i++)
    {
        if (i!=numnv-1)
           printf("%.2f ",nv[i].h);
        else
            printf("%.2f\n",nv[i].h);
    }
       return 0;
}
