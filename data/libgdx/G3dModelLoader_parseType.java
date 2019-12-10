private int parseType(String type) {
    if (type.equals("TRIANGLES")) {
        return GL20.GL_TRIANGLES;
    } else if (type.equals("LINES")) {
        return GL20.GL_LINES;
    } else if (type.equals("POINTS")) {
        return GL20.GL_POINTS;
    } else if (type.equals("TRIANGLE_STRIP")) {
        return GL20.GL_TRIANGLE_STRIP;
    } else if (type.equals("LINE_STRIP")) {
        return GL20.GL_LINE_STRIP;
    } else {
        throw new GdxRuntimeException("Unknown primitive type '" + type + "', should be one of triangle, trianglestrip, line, linestrip, lineloop or point");
    }
}
