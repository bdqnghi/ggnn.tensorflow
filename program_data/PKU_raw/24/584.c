int main(int argc, char* argv[])
{
    char s[500];
 int i,t[500]={0},j=1,jz;
 t[0] = -1;
 gets(s);
 int m=strlen(s);
 s[m]=' ';
 for (i=0;i<=m;i++)
 {
  if (s[i]==' ')
  {
	  t[j]=i;
      j++;
      jz=j;
  }
 }
    int k,l[20];
    for (k=1;k<jz;k++)
	{
		l[k]=t[k] - t[k-1] - 1;
	}
 int max=0,min=20,y1,y2;
    for (k=1;k<jz;k++)
    {
		if (min>l[k]){
			min=l[k];
			y1=k;}
	}
     for (k=1;k<jz;k++)
    {
		 if(max<l[k]){
			max=l[k];
			y2=k;
		 }
	 }
	 for ( i = t[y2] - l[y2]; i < t[y2]; i++ ){
		printf("%c",s[i]);
	 }
     printf("\n");
 
     for ( i = t[y1] - l[y1]; i < t[y1]; i++ ){
		printf("%c",s[i]);
	 }
	 printf("\n");
 return 0;
}