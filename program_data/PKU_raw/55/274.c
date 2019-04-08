int main(int argc, char* argv[])
{
	char a[100],f[100],p;
	int n,m,i,k=-1,sum=1,s=0,b[100],j,msum=0;
	scanf("%d %s %d",&n,a,&m);
	for(i=0;a[i]!='\0';i++){
		k++;
	}
	for(i=0;i<=k;i++){
		if(a[i]>96&&a[i]<123){
			a[i]=a[i]-32;
		}
	}
	for(i=0;i<=k;i++){
		if(a[i]>47&&a[i]<58){
			sum=sum*(a[i]-48);
		   for(j=i;j<k;j++){
			   sum=sum*n;
		   }
		}
		else if(a[i]>64&&a[i]<91){
			sum=sum*(a[i]-55);
			for(j=i;j<k;j++){
				sum=sum*n;
			}
		}
		msum=msum+sum;
		sum=1;
	}
	for(i=0;msum>=m;i++){
		b[i]=msum%m;
		if(b[i]>=0&&b[i]<10){
			f[i]=b[i]+48;
		}
		else if(b[i]>=10&&b[i]<=36){
			f[i]=b[i]+55;
		}
		msum=msum/m;
		s++;
	}
	if(msum>=0&&msum<10){
			p=msum+48;
	}
	else if(msum>=10&&msum<36){
		p=msum+55;
	}
	printf("%c",p);
	for(i=s-1;i>=0;i--){
	    printf("%c",f[i]);
	}
	return 0;
}