
struct point{
    int x;
    int y;
    int z;
};

struct distanceBetweenPoints{
    int pointIndex1;
    int pointIndex2;
    double distace;
};

double distance(struct point p1, struct point p2){
    double d =0.0;
    d = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y) + (p1.z - p2.z)*(p1.z - p2.z));
    return d;
}

int main(int argc, const char * argv[])
{
    int n;
    scanf("%d", &n);
    
    struct point points[n];
    for (int j=0; j<n; j++) {
        scanf("%d %d %d", &points[j].x, &points[j].y, &points[j].z);
    }
    
    struct distanceBetweenPoints distances[n*(n-1)/2];
    int index = 0;
    for (int index1=0; index1<n; index1++) { 
        for (int index2=index1+1; index2<n; index2++) {
            double d = distance(points[index1], points[index2]);
            distances[index].distace = d;
            distances[index].pointIndex1 = index1;
            distances[index].pointIndex2 = index2;
            index ++;
        }
    }
    
    for (int i=0; i<index; i++) {
        for (int j=1; j<index-i; j++) {
            if (distances[j-1].distace < distances[j].distace) {
                struct distanceBetweenPoints temp;
                temp = distances[j-1];
                distances[j-1] = distances[j];
                distances[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < index; i++) {
        printf("(%d,%d,%d)",points[distances[i].pointIndex1].x, points[distances[i].pointIndex1].y, points[distances[i].pointIndex1].z);
        printf("-");
        printf("(%d,%d,%d)",points[distances[i].pointIndex2].x, points[distances[i].pointIndex2].y, points[distances[i].pointIndex2].z);
        printf("=");
        printf("%.2lf\n", distances[i].distace);
    }
    
    return 0;
}
