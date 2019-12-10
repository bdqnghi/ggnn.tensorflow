public void collideEdgeAndPolygon(Manifold manifold, final EdgeShape edgeA, final Transform xfA, final PolygonShape polygonB, final Transform xfB) {
    collider.collide(manifold, edgeA, xfA, polygonB, xfB);
}
