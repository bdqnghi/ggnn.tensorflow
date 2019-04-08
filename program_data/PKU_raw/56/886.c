void main()
{
	char a[5],b[5];
	int i,num;
	for (num=0,i=0;(a[i]=getchar())!='\n';i++)
		num++;
    for (i=0;i<num;i++)
		b[i]=a[num-i-1];
	for (i=0;i<num;i++)
		printf("%c",b[i]);
}