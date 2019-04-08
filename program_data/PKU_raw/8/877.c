

int cmp(const void *a,const void *b){
  return *(int *)a>*(int *)b;
};

int L1,L2;
int ar1[MAX],ar2[MAX];

void read_array();
void sort_array();
void merge_array();
void show_array();

int main(){
  read_array();
  sort_array();
  merge_array();
  show_array();
  return 0;
}

void read_array(){
  memset(ar1,0,sizeof(ar1));
  memset(ar2,0,sizeof(ar2));
  
  cin>>L1>>L2;
  
  for(int i=0;i<L1;i++) cin>>ar1[i];
  for(int i=0;i<L2;i++) cin>>ar2[i];

}

void sort_array(){
  qsort(ar1,L1,sizeof(int),cmp);
  qsort(ar2,L2,sizeof(int),cmp);
}

void merge_array(){
  for(int i=0;i<L2;i++)
    ar1[L1+i]=ar2[i];
}

void show_array(){
  for(int i=0;i<L1+L2;i++){
    cout<<ar1[i];
    if(i!=L1+L2-1) cout<<' ';
  }
}
