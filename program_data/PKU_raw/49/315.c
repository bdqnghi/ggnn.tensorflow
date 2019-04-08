void main()
{
	char *s;
	int i,n,j,k,m=0,p,**x,y=0,z=0,min,q,a;
	x=(int **)malloc(100*sizeof(int*));
	for(y=0;y<100;y++)*(x+y)=(int *)malloc(3*sizeof(int));
	y=0;
	
	s=(char *)malloc(500*sizeof(char));
	gets(s);
	n=strlen(s);
    for(i=0;i<n;i++)
	{m=1;
		for(j=i+1;j<n;j++)
			if(*(s+i)==*(s+j)){m=0;for(k=i+1;k<=j-1;k++){if(*(s+k)==*(s+j-k+i))m=0;else m=1;}
			if(m==0){*(*(x+y))=i;*(*(x+y)+1)=j;*(*(x+y)+2)=j-i;y++;}}
	}
for(a=0;a<y;a++)
{min=501;
	for(z=0;z<y;z++)
	{
if(*(*(x+z)+2)<min){min=*(*(x+z)+2);q=z;}
}
for(p=*(*(x+q)+0);p<=*(*(x+q)+1);p++)
printf("%c",*(s+p));printf("\n");*(*(x+q)+2)=501;
}


}