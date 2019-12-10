private void drawShape(Fixture fixture, Transform transform, Color color) {
    if (fixture.getType() == Type.Circle) {
        CircleShape circle = (CircleShape) fixture.getShape();
        t.set(circle.getPosition());
        transform.mul(t);
        drawSolidCircle(t, circle.getRadius(), axis.set(transform.vals[Transform.COS], transform.vals[Transform.SIN]), color);
    }
    if (fixture.getType() == Type.Edge) {
        EdgeShape edge = (EdgeShape) fixture.getShape();
        edge.getVertex1(vertices[0]);
        edge.getVertex2(vertices[1]);
        transform.mul(vertices[0]);
        transform.mul(vertices[1]);
        drawSolidPolygon(vertices, 2, color, true);
    }
    if (fixture.getType() == Type.Polygon) {
        PolygonShape chain = (PolygonShape) fixture.getShape();
        int vertexCount = chain.getVertexCount();
        for (int i = 0; i < vertexCount; i++) {
            chain.getVertex(i, vertices[i]);
            transform.mul(vertices[i]);
        }
        drawSolidPolygon(vertices, vertexCount, color, true);
    }
    if (fixture.getType() == Type.Chain) {
        ChainShape chain = (ChainShape) fixture.getShape();
        int vertexCount = chain.getVertexCount();
        for (int i = 0; i < vertexCount; i++) {
            chain.getVertex(i, vertices[i]);
            transform.mul(vertices[i]);
        }
        drawSolidPolygon(vertices, vertexCount, color, chain.isLooped());
    }
}
