struct shu
{int num;
 char author[26];
};

void main()
{
  struct shu shu[999];
  int n,i,j,k,m;
  scanf("%d",&n);
  for(i=0;i<n;i++) 
    scanf("%d %s",&shu[i].num,shu[i].author);
  int a[26]={0};
  for(i=0;i<n;i++)
  {
    for(j=0;j<26;j++)
	{
	  if(shu[i].author[j]=='A') a[0]=a[0]+1;
      else if(shu[i].author[j]=='B') a[1]=a[1]+1;
      else if(shu[i].author[j]=='C') a[2]=a[2]+1;
      else if(shu[i].author[j]=='D') a[3]=a[3]+1;
      else if(shu[i].author[j]=='E') a[4]=a[4]+1;
      else if(shu[i].author[j]=='F') a[5]=a[5]+1;
      else if(shu[i].author[j]=='G') a[6]=a[6]+1;
      else if(shu[i].author[j]=='H') a[7]=a[7]+1;
      else if(shu[i].author[j]=='I') a[8]=a[8]+1;
      else if(shu[i].author[j]=='J') a[9]=a[9]+1;
      else if(shu[i].author[j]=='K') a[10]=a[10]+1;
      else if(shu[i].author[j]=='L') a[11]=a[11]+1;
      else if(shu[i].author[j]=='M') a[12]=a[12]+1;
      else if(shu[i].author[j]=='N') a[13]=a[13]+1;
      else if(shu[i].author[j]=='O') a[14]=a[14]+1;
      else if(shu[i].author[j]=='P') a[15]=a[15]+1;
      else if(shu[i].author[j]=='Q') a[16]=a[16]+1;
      else if(shu[i].author[j]=='R') a[17]=a[17]+1;
      else if(shu[i].author[j]=='S') a[18]=a[18]+1;
      else if(shu[i].author[j]=='T') a[19]=a[19]+1;
      else if(shu[i].author[j]=='U') a[20]=a[20]+1;
      else if(shu[i].author[j]=='V') a[21]=a[21]+1;
      else if(shu[i].author[j]=='W') a[22]=a[22]+1;
      else if(shu[i].author[j]=='X') a[23]=a[23]+1;
      else if(shu[i].author[j]=='Y') a[24]=a[24]+1;
      else if(shu[i].author[j]=='Z') a[25]=a[25]+1;
	}
  }
  k=a[0],m=0;
  for(i=0;i<26;i++)
  {
    if(k<a[i]) 
	{
	  k=a[i];
	  m=i;
	}
  }
  char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  printf("%c\n",b[m]);
  printf("%d\n",k);
  for(i=0;i<n;i++)
  {
    for(j=0;j<26;j++)
	{
	  if(shu[i].author[j]==b[m])
	  {
	    printf("%d\n",shu[i].num);
		break;
	  }
	}
  }
}