

int cmp(const void *elem1, const void *elem2){
  int *e1 = (int *)elem1;
  int *e2 = (int *)elem2;
  return *e2-*e1;
}

int main(){
  int n;
  int data1[1005];
  int data2[1005];
  int i;
  int i1, i2, j1, j2;
  int result;
  while(true){
    cin>>n;
    if(n==0) break;
    for(i=0; i<n; i++)
      cin>>data1[i];
    for(i=0; i<n; i++)
      cin>>data2[i];
    qsort(data1, n, sizeof(int), cmp);
    qsort(data2, n, sizeof(int), cmp);
    i1=0;
    j1=0;
    i2=n-1;
    j2=n-1;
    result=0;
    while(i1!=i2+1){
      while(data1[i1]!=data2[j1] && i1!=i2+1){
	if(data1[i1]<data2[j1]){
	  i2--;
	  j1++;
	  result-=200;
	}
	else if(data1[i1]>data2[j1]){
	  i1++;
	  j1++;
	  result+=200;
	}
	else break;
      }
      while(data1[i2]!=data2[j2] && i1!=i2+1){
	if(data1[i2]<data2[j2]){
	  j1++;
	  i2--;
	  result-=200;
	}
	else if(data1[i2]>data2[j2]){
	  i2--;
	  j2--;
	  result+=200;
	}
	else break;
      }
      if(data1[i1]==data2[j1] && data1[i2]==data2[j2] && i1!=i2+1){
	if(data1[i2]!=data2[j1])
	  result-=200;
	i2--;
	j1++;
      }
    }
    cout<<result<<endl;
  }
  return 0;
}
