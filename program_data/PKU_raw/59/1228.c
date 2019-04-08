
int main()
{
    int dx[4]={1,0,0,-1};
    int dy[4]={0,1,-1,0};
	int n;
    cin>>n;
    char room[100][100]={0};
    int Room[100][100]={0};
    memset(room, '#', sizeof(room));
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>room[i][j];
        }
    }
    int day;
    cin>>day;
    for (int q=1; q<day; q++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (room[i][j]=='@') {
                    for (int k=0; k<4; k++) {
                        int tx=i+dx[k],ty=j+dy[k];
                        if (room[tx][ty]=='.') {
                            Room[tx][ty]=1;
                        }
                    }
                }
            }
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (Room[i][j]) {
                    room[i][j]='@';
                }
            }
        }
        memset(Room, 0, sizeof(Room));
    }
    int p=0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (room[i][j]=='@') {
                p++;
            }
        }
    }
    cout<<p;
	return 0;
}