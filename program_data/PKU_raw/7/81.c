int main ()
{
	int l1,l2,i,j,a,k,m;
	char sz[256],s1[256],r[256],zj[256];
	gets (sz);
	gets (s1);
	gets (r);
	l1=strlen(sz);
	l2=strlen(s1);
	for (i=0;i<l1;i++)
	{
		if (sz[i]==s1[0])
		{
			a=0;
			for (j=0;j<l2;j++)
			{
				if (s1[j]==sz[i+j])
					a=a+1;
			}
			if (a==l2)
			{
                          for (m=0;m<i;m++)
                                 printf ("%c",sz[m]);
                          printf ("%s",r);
                          for (m=i+l2;m<l1;m++)
                          printf ("%c",sz[m]);
                          k=1;
				
			}
		}
		if (k==1) break;
	}
        if (k!=1) printf ("%s",sz);

	return 0;
}
