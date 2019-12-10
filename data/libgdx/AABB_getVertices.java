public final void getVertices(Vec2[] argRay) {
    argRay[0].set(lowerBound);
    argRay[1].set(lowerBound);
    argRay[1].x += upperBound.x - lowerBound.x;
    argRay[2].set(upperBound);
    argRay[3].set(upperBound);
    argRay[3].x -= upperBound.x - lowerBound.x;
}
