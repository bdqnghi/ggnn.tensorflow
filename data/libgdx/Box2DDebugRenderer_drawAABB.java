private void drawAABB(Fixture fixture, Transform transform) {
    if (fixture.getType() == Type.Circle) {
        CircleShape shape = (CircleShape) fixture.getShape();
        float radius = shape.getRadius();
        vertices[0].set(shape.getPosition());
        transform.mul(vertices[0]);
        lower.set(vertices[0].x - radius, vertices[0].y - radius);
        upper.set(vertices[0].x + radius, vertices[0].y + radius);
        // define vertices in ccw fashion...
        vertices[0].set(lower.x, lower.y);
        vertices[1].set(upper.x, lower.y);
        vertices[2].set(upper.x, upper.y);
        vertices[3].set(lower.x, upper.y);
        drawSolidPolygon(vertices, 4, AABB_COLOR, true);
    } else if (fixture.getType() == Type.Polygon) {
        PolygonShape shape = (PolygonShape) fixture.getShape();
        int vertexCount = shape.getVertexCount();
        shape.getVertex(0, vertices[0]);
        lower.set(transform.mul(vertices[0]));
        upper.set(lower);
        for (int i = 1; i < vertexCount; i++) {
            shape.getVertex(i, vertices[i]);
            transform.mul(vertices[i]);
            lower.x = Math.min(lower.x, vertices[i].x);
            lower.y = Math.min(lower.y, vertices[i].y);
            upper.x = Math.max(upper.x, vertices[i].x);
            upper.y = Math.max(upper.y, vertices[i].y);
        }
        // define vertices in ccw fashion...
        vertices[0].set(lower.x, lower.y);
        vertices[1].set(upper.x, lower.y);
        vertices[2].set(upper.x, upper.y);
        vertices[3].set(lower.x, upper.y);
        drawSolidPolygon(vertices, 4, AABB_COLOR, true);
    }
}
