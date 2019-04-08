int main()
{

    int a=2,b,m,s;
    scanf("%d",&m);
    s=m/2;
    while(a<=s)
    {
        b=m-a;
        int i=2,x,z,y=1,j=2,k,l,h=1;
        while(i<a)
        {
            x=a-a/i*i;
            if(x==0)
                z=0;
            else
                z=1;
            y=y*z;
            i++;
        }

        while(j<b)
        {
            k=b-(b/j)*j;
            if(k==0)
                l=0;
            else
                l=1;
            h=h*l;
            j++;
        }
        if(y==1)
            if(h==1)
            printf("%d %d\n",a,b);
        a++;
    }
return 0;
}

