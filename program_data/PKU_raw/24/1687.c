int main()
{
	char a[1000],c[1000][1000];
	gets(a);
	int i,j,x,y,b=0,d=0;
	int length[200]={0};
	int max,min;

	for(i=0;a[i]!='\0';i++){
		if((a[i]!=' ')&&(a[i]!=',')){
			c[b][d]=a[i];
			d++;
			length[b]++;
		}
		else if(((a[i]==' ')&&(a[i-1]!=','))||((a[i]==',')&&(a[i+1]==' '))){
			b++;
			d=0;
		}
		else if((a[i]==' ')&&(a[i-1]==',')){
			continue;
		}
	}

			
	max=length[0];
	x=0;

	for(i=0;i<b;i++){
		if(max<length[i+1]){
			max=length[i+1];
			x=i+1;
		}
	}
	for(j=0;j<length[x];j++){
		printf("%c",c[x][j]);
	}
	printf("\n");

		
	min=length[0];
	y=0;

	for(i=0;i<b;i++){
		if(min>length[i+1]){
			min=length[i+1];
			y=i+1;
		}
	}
	for(j=0;j<length[y];j++){
		printf("%c",c[y][j]);
	}

	return 0;
}
