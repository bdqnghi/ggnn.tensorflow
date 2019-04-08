
int main()
{
	char a[300][101],h;
	int i,j=0,n;
	int l[300];
	scanf("%c",&h);
    i=0;
	while(h!='\n')
	{
		a[i][j]=h;
		if(h==' ')
		{
			a[i][j]='\0';
            i++;
            j=-1;
		}
		j++;
		scanf("%c",&h);
	}
	a[i][j]='\0';
    n=i+1;
    j=0;
    
    for(i=0;i<n;i++){
                     if(strlen(a[i])!=0){
                                          l[j]=strlen(a[i]);
                                          j++;
                                          }
                     }
    
    for(i=0;i<j-1;i++){
                       printf("%d,",l[i]);
                       }
    printf("%d",l[j-1]);

                    
    return 0;
}