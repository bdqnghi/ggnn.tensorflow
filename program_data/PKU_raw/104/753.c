int main()
{
	int a[1000],b[1000];            //??????
	int x,y,i,j,k,t;
	cin>>x>>y;
	a[0]=x;b[0]=y;
	if(x==y) cout<<x;
	else{
	for(i=1;;i++) {                //??x??????
		a[i]=a[i-1]/2;
		if(a[i]==1) {
			k=i;
			break;
		}
	}
	for(i=1;;i++){                //??y??????
		b[i]=b[i-1]/2;
		if(b[i]==1){
			t=i;
			break;
		}
	}

	for(i=k,j=t;;i--,j--){          //??x?y?????
		if(a[i]!=b[j])
		{cout<<a[i+1]<<endl;
		break;}
	}
	}
	return 0;
}
