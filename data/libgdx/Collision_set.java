public void set(final ClipVertex cv) {
    Vec2 v1 = cv.v;
    v.x = v1.x;
    v.y = v1.y;
    ContactID c = cv.id;
    id.indexA = c.indexA;
    id.indexB = c.indexB;
    id.typeA = c.typeA;
    id.typeB = c.typeB;
}
