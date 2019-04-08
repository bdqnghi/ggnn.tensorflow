void main()
{   void turn (char a[]);
	char words[101];
   gets(words);
   turn(words);
   puts(words);
}
  void turn (char a[])
  {   char b[50][101],c[101]="";
      int i,j=0,k,l,len;
	  len=strlen(a);
	  for (i=0;i<len;i++)
		  if (a[i]==' ')
		  {  k=i;
		     while (a[k-1]!=' '&&k!=0)
				 k--;
			 for (l=0;k<i;k++,l++)
				 b[j][l]=a[k];
			 b[j][l]='\0';
			 j++;
		  }
		k=i;
		while (a[k-1]!=' '&&k!=0)
			k--;
		for(l=0;k<i;k++,l++)
			b[j][l]=a[k];
		b[j][l]='\0';
		strcpy(a,c);
		for (i=j;i>0;i--)
		{	strcat(a,b[i]);
		    strcat(a," ");
		}
        strcat(a,b[0]);
		strcat(a,"\0");
		}