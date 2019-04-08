int main()
{
int de(int m,int t);
    int m,t,total;
    scanf("%d%d",&m,&t);
    total=de(m,t);
    printf("%d\n",total);
}

int de(int x,int y)
{
    int i,j,p,q;
    for(i=1;;i++)
    {
                 p=0;
                 q=i;
                 for(j=1;j<=x;j++)
                 {
                                  if(q%x==y)
                                  {
                                            q=q-q%x-q/x;
                                            p++;
                                  }
                                  if(q%x!=y)
                                  break;
                 }
                 if(p==x&&q>0) break;
    }
    return(i);
}


