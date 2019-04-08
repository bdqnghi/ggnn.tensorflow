void main()
{
	char a[100];
	gets(a);
	int length=strlen(a);
	int i,j;
	int w1,w2;
	char q;
	q=a[0];
	for(i=0;i<length;i++){
		if(a[i]==q){
			for(j=i+1;j<length;j++){
				if(a[j]==' '){
					continue;
				}
				else if(a[j]==q){
					i=j-1;
					break;
					
				}
				else if(a[j]!=q&&a[j]!=' '){
					printf("%d %d\n",i,j);
					a[i]=' ';
					a[j]=' ';
					i=-1;
					break;
				}
			}
		}
	}
}




	
    
