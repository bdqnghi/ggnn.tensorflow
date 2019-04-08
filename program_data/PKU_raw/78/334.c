int main()
{
	int z,q,s,l,k,m,d;
	char a[4]={'z','q','s','l'};
	char c,f=8;

	int i=0;
	for(z=0;z<=50;z=z+10)
	{
		for(q=0;q<=50;q=q+10)
		{
			for(s=0;s<=50;s=s+10)
			{
				for(l=0;l<=50;l=l+10)
				{
					if (((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q)&&(z*s*q*l!=0))
					{
						i=1;
						break;
					}
					if (i) break;
				}
				if (i) break;
			}
			if (i) break;
		}
		if (i) break;
	}
    int b[4]={z,q,s,l};
    for(d=0;d<4;d++)
    {
        for(k=3;k>0;k--)
        {
            if (b[k]>b[k-1])
            {
            m=b[k];
            b[k]=b[k-1];
            b[k-1]=m;
            c=a[k];
            a[k]=a[k-1];
            a[k-1]=c;
            }
        }
    }
    for(d=0;d<4;d++) printf("%c %d\n",a[d],b[d]);
    printf("%c%c%c%c",f,f,f,f);
	return 0;
}
