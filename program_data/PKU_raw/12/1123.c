
main()
{
	int c[100];
	int m,z;
	for(m=0;;m++){
		int i,j,k,n;
		int a[17],b[17];
		n=0;
		scanf("%d",&a[0]);
		b[0]=2*a[0];
		if(a[0]==-1){
			goto end;
		}
		else{
			for(i=1;a[i-1]!=0;i++){
				scanf("%d",&a[i]);
				if(a[i]==-1){
					goto end;
				}
				b[i]=2*a[i];
			}
			for(j=0;j<i-1;j++){
				for(k=0;k<i-1;k++){
					if(b[k]==a[j])
						n++;
				}
				c[m]=n;
			}
		}
	}
	end: for(z=0;z<m;z++)
			 printf("%d\n",c[z]);
}