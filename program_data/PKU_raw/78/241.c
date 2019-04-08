void main()
{
	int z,q,s,l,a[5],j,i,t;
	char b[5];
	for(z=10;z<=50;z=z+10)
		for(q=10;q<=50;q=q+10)
			for(s=10;s<=50;s=s+10)
			   for(l=10;l<=50;l=l+10)
			   if(z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
				   if(z+q==s+l&&z+l>s+q&&z+s<q)
                   {a[1]=z;a[2]=q;a[3]=l;a[4]=s;b[1]='z';b[2]='q';b[3]='l';b[4]='s';}
				    for(j=1;j<=3;j++)
                    for(i=1;i<=4-j;i++)
                    if(a[i]<a[i+1])
					{t=a[i]; a[i]=a[i+1]; a[i+1]=t;
					t=b[i]; b[i]=b[i+1]; b[i+1]=t;}
     for(i=1;i<=4;i++)
		 printf("%c %d\n",b[i],a[i]);
	
}