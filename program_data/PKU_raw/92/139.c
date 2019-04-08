int compare(const void *a,const void *b)
{

    int x,y;
    x=*(int *)a;
    y=*(int *)b;
    if (x<y)
          return 1;
    else if (x>y)
          return -1;
        else 
        	return 0;
}
int main()
{
    int i,j,k,s,x,n,t[1000],q[1000];
    cin>>n;
    while (n!=0)
    {
          for (i=0;i<n;i++)
                cin>>t[i];
          for (i=0;i<n;i++)
                cin>>q[i];
          qsort(t,n,sizeof(t[0]),compare);
          qsort(q,n,sizeof(q[0]),compare);
          for (i=0;t[0]<q[i] && i<n;i++);
          for (s=-200*n;i<n;i++)
          {
                x=-i*200;
                for (j=i,k=0;j<n;j++,k++)
                {
                      if (t[k]>q[j])
                            x+=200;
                      else if (t[k]<q[j])
                            x-=200;
                }
                if (x>s)
                      s=x;
          }
          cout<<s<<endl;
          scanf("%d",&n);
    }
    return 0;
}
