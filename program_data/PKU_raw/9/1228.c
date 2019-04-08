struct bingren{
	char id[1000];
	int age;
}bin[101];

int main(int argc, char* argv[])
{	int n;
	scanf("%d",&n);
	int i,j,k=0,l=0,e,a[100];
		char xiao[101][1000],da[101][1000],c[1000];
	for(i=0;i<n;i++){
		scanf("%s %d",&bin[i].id,&bin[i].age);
	}
	for(i=0;i<n;i++){
		if(bin[i].age<60){
			strcpy(xiao[k],bin[i].id);
			k++;}
		else {
			strcpy(da[l],bin[i].id);
			a[l]=bin[i].age;
			l++;}
		}
	for(i=0;i<l;i++){
		for(j=0;j<l-i;j++){
			if(a[j]<a[j+1]){
				strcpy(c,da[j+1]);
				strcpy(da[j+1],da[j]);
				strcpy(da[j],c);
			    e=a[j+1];a[j+1]=a[j];a[j]=e;
			}
		}
		
	}
	for(i=0;i<l;i++){
		printf("%s\n",da[i]);
	}
	for(i=0;i<k;i++){
			printf("%s\n",xiao[i]);
	}

	return 0;
}
