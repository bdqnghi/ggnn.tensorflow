int main(int argc, char* argv[])
{
    int i,j,l,count=0;
	char y[50],x[50];
	scanf ("%s",x);
	scanf ("%s",y);
	l=strlen(x);
    for (i=0,j=0;i<l;){
		if (x[i]==y[j]){
			i++;
			j++;
		}
		else {
			j++;
			count++;
		}
	}
    printf("%d",count);
	
	return 0;
}
