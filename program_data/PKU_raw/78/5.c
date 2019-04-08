void main()
{
    int z,q,s,l;
    for(z=10;z<=50;z+=10)
    for(q=10;q<=50;q+=10)
    for(s=10;s<=50;s+=10)
    for(l=10;l<=50;l+=10)
    if(z+q==s+l&&z+l>s+q&&q>z+s)
    {
        int a[4]={z,q,s,l},i,j,t;
        for(i=0;i<3;i++)
        for(j=0;j<3-i;j++)
        if(a[j]<a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
        for(i=0;i<4;i++)
        {
            if(a[i]==z)printf("z %d\n",z);
            if(a[i]==q)printf("q %d\n",q);
            if(a[i]==s)printf("s %d\n",s);
            if(a[i]==l)printf("l %d\n",l);
        }
    }
}