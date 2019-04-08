int main()
{
	int n,i,j,bfh[100]={0},sz[100];
	 char zf[100][21];
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
		{
			scanf("%s",zf[i]);
			sz[i]=strlen(zf[i]);
	    }
	 for(i=0;i<n;i++) 
	 {
      for(j=0;j<sz[i];j++)
	    {
			if(zf[i][j]!='a'&&zf[i][j]!='b'&&zf[i][j]!='c'&&zf[i][j]!='d'&&zf[i][j]!='e'&&zf[i][j]!='f'&&zf[i][j]!='g'&&zf[i][j]!='h'&&
				zf[i][j]!='i'&&zf[i][j]!='j'&&zf[i][j]!='k'&&zf[i][j]!='l'&&zf[i][j]!='m'&&zf[i][j]!='n'&&zf[i][j]!='o'&&zf[i][j]!='p'&&
				zf[i][j]!='q'&&zf[i][j]!='r'&&zf[i][j]!='s'&&zf[i][j]!='t'&&zf[i][j]!='u'&&zf[i][j]!='v'&&zf[i][j]!='w'&&zf[i][j]!='x'&&
				zf[i][j]!='y'&&zf[i][j]!='z'&&zf[i][j]!='A'&&zf[i][j]!='B'&&zf[i][j]!='C'&&zf[i][j]!='D'&&zf[i][j]!='E'&&zf[i][j]!='F'&&
				zf[i][j]!='G'&&zf[i][j]!='H'&&zf[i][j]!='I'&&zf[i][j]!='J'&&zf[i][j]!='K'&&zf[i][j]!='L'&&zf[i][j]!='M'&&zf[i][j]!='N'&&
				zf[i][j]!='O'&&zf[i][j]!='P'&&zf[i][j]!='Q'&&zf[i][j]!='R'&&zf[i][j]!='S'&&zf[i][j]!='T'&&zf[i][j]!='U'&&zf[i][j]!='V'&&
				zf[i][j]!='W'&&zf[i][j]!='X'&&zf[i][j]!='Y'&&zf[i][j]!='Z'&&zf[i][j]!='0'&&zf[i][j]!='1'&&zf[i][j]!='2'&&zf[i][j]!='3'&&
				zf[i][j]!='4'&&zf[i][j]!='5'&&zf[i][j]!='6'&&zf[i][j]!='7'&&zf[i][j]!='8'&&zf[i][j]!='9'&&zf[i][j]!='_')
				bfh[i]=1;
	    }
	 }
	 for(i=0;i<n;i++) 
	 {
		 if(zf[i][0]=='0'||zf[i][0]=='1'||zf[i][0]=='2'||zf[i][0]=='3'||zf[i][0]=='4'||
			 zf[i][0]=='5'||zf[i][0]=='6'||zf[i][0]=='7'||zf[i][0]=='8'||zf[i][0]=='9')
         printf("no\n");
		 else if (bfh[i]==1)
		 printf("no\n");
		 else
			 printf("yes\n");		 
	 }
	 return 0;
}