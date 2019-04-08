
int main(int argc, char* argv[])
{int sz[99];
int n,e;
scanf ("%d",&n);
for( int i = 0 ; i < n ; i ++ )
{
scanf  ("%d",&(sz[i]));
}
for(int c = 0; c < n - 1; c++){
			if(sz[c] > sz[c+1]){
					e = sz[c+1];
					sz[c+1] = sz[c];
					sz[c] = e;
			}
	}
int b;
for(int a = 0;a <n - 2; a++){
			if(sz[a] > sz[a+1]){
					b = sz[a+1];
					sz[a+1] = sz[a];
					sz[a] = b;
			}
	}
printf ("%d\n",sz[n-1]);
printf ("%d\n",sz[n-2]);
	return 0;
}