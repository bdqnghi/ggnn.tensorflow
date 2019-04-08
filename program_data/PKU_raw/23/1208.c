void main()
{
      char s[100];//????????????//
	  char data[200][100];
	  char c;
	  int k=0,h=0;
	  scanf("%s",s);
	  strcpy(data[k++],s);
	  while((c=getchar())!='\n')
	  {
		  scanf("%s",s);
		  strcpy(data[k++],s);
	  }
	  for(h=k-1;h>=0;h--)
	  {
		  if(h==0)printf("%s\n",data[0]);
		  else printf("%s ",data[h]);
	  }
}

