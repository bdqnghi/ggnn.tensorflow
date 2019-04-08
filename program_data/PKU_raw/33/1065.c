
char convert[100];

int main(){
    int N,l,i,tt;
    char a[10000];
    
    convert['A'] = 'T';
    convert['T'] = 'A';
    convert['G'] = 'C';
    convert['C'] = 'G';
    
    scanf("%d",&N);
    for (tt = 1; tt <=N; tt++){
          scanf("%s",a);
          l = strlen(a);
          for (i=0;i<l;i++) printf("%c",convert[a[i]]);
          printf("\n");
    }

    return 0;
}
