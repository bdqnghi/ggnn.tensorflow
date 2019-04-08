struct d
    {
        char a[5];
        int t;
    }str[500];
int compare(struct d *m,struct d *n)
{
    return n->t-m->t;
}

int main()
{
    int k,i,r=0,l,j,p,q;
    char s[501];

    int u[500]={0};
    scanf("%d",&k);
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(u[i]==0)
        {
            for(j=0;j<k;j++) str[r].a[j]=s[i+j];
            str[r].a[k]='\0';
            str[r].t=999-i;
            u[i]=1;
            j=i+1;
            while(j<l+1-k)
            {
                q=0;
                for(p=0;p<k;p++)
                {
                    if(s[j+p]!=str[r].a[p])
                    {
                        q=1;
                        break;
                    }
                }
                if(q==0)
                {
                    u[j]=1;
                    str[r].t=str[r].t+500;
                }
                j++;
            }
            r++;
        }
    }
    qsort(str,r,sizeof(struct d),compare);
    if((str[0].t)/500==1) printf("NO");
    else {
    printf("%d\n",(str[0].t)/500);
    for(i=0;(str[i].t)/500==(str[0].t)/500;i++)
    puts(str[i].a);
    }
    return 0;
}