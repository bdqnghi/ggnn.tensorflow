int main(int argc, char* argv[])
{
	int a[16]={0};
	int i,j,k;
	int num=0;
	for(i=0;;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			for(j=0;j<i-1;j++)
				for(k=j+1;k<i;k++)
				{
					if(a[j]==2*a[k]||2*a[j]==a[k])
						num++;
				}
			printf("%d\n",num);
			num=0;
			i=-1;	
		}
		if(a[i]==-1)
			break;
	}
	return 0;
	}

