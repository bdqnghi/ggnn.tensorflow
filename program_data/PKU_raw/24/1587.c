
int main(int argc, char* argv[])
{
    char str[2000];
    int ann[200]={0};

    char arr[200][100];
    int i=0,k=0;
    int j=0,l;
    int m1,m2;
	int len,n;
    gets(str);
  
	len=strlen(str);
    for (l=0;l<=len;l++)
    {
      arr[i][j]=str[l];
      if ((arr[i][j]==32)||(arr[i][j]==44)||(arr[i][j]==0)){
          arr[i][j]=0;
          ann[i]=j;
		  i++;
		  j=-1;
      }
      j++;
	}
	n=i;

    m1=0;
	m2=0;

	for (i=1;i<n;i++) {
		if (ann[m1]<ann[i]) {
			m1=i;
		}
		if ((ann[m2]>ann[i])&&(ann[i]>0)) {
			m2=i;
		}
	}

	//for (i=0;i<n;i++) {
	//	printf("%s %d\n",arr[i],ann[i]);
	//}

	puts(arr[m1]);
    puts(arr[m2]);
   
    return 0;
}