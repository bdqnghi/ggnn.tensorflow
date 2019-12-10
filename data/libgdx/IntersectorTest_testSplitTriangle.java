@Test
public void testSplitTriangle() {
    Plane plane = new Plane(new Vector3(1, 0, 0), 0);
    SplitTriangle split = new SplitTriangle(3);
    {
        // All back
        // Whole triangle on the back side
        float[] fTriangle = { -10, 0, 10, -1, 0, 0, -12, 0, 10 };
        Intersector.splitTriangle(fTriangle, plane, split);
        assertTrue(split.numBack == 1);
        assertTrue(split.numFront == 0);
        assertTrue(split.total == 1);
        assertTrue(triangleEquals(split.back, 0, 3, fTriangle));
        fTriangle[4] = 5f;
        assertFalse("Test is broken", triangleEquals(split.back, 0, 3, fTriangle));
    }
    {
        // All front
        // Whole triangle on the front side
        float[] fTriangle = { 10, 0, 10, 1, 0, 0, 12, 0, 10 };
        Intersector.splitTriangle(fTriangle, plane, split);
        assertTrue(split.numBack == 0);
        assertTrue(split.numFront == 1);
        assertTrue(split.total == 1);
        assertTrue(triangleEquals(split.front, 0, 3, fTriangle));
    }
    {
        // Two back, one front
        // ABC One vertex in front, two in back
        float[] triangle = { -10, 0, 10, 10, 0, 0, -10, 0, -10 };
        // Split points are D (0,0,5) and E (0,0,-5)
        Intersector.splitTriangle(triangle, plane, split);
        assertTrue(split.numBack == 2);
        assertTrue(split.numFront == 1);
        assertTrue(split.total == 3);
        // There is only one way to triangulate front
        assertTrue(triangleEquals(split.front, 0, 3, new float[] { 0, 0, 5, 10, 0, 0, 0, 0, -5 }));
        // There are two ways to triangulate back
        // ADE AEC
        float[][] firstWay = { { -10, 0, 10, 0, 0, 5, 0, 0, -5 }, { -10, 0, 10, 0, 0, -5, -10, 0, -10 } };
        // ADC DEC
        float[][] secondWay = { { -10, 0, 10, 0, 0, 5, -10, 0, -10 }, { 0, 0, 5, 0, 0, -5, -10, 0, -10 } };
        float[] base = split.back;
        boolean first = (triangleEquals(base, 0, 3, firstWay[0]) && triangleEquals(base, 9, 3, firstWay[1])) || (triangleEquals(base, 0, 3, firstWay[1]) && triangleEquals(base, 9, 3, firstWay[0]));
        boolean second = (triangleEquals(base, 0, 3, secondWay[0]) && triangleEquals(base, 9, 3, secondWay[1])) || (triangleEquals(base, 0, 3, secondWay[1]) && triangleEquals(base, 9, 3, secondWay[0]));
        assertTrue("Either first or second way must be right (first: " + first + ", second: " + second + ")", first ^ second);
    }
    {
        // Two front, one back
        // ABC One vertex in back, two in front
        float[] triangle = { 10, 0, 10, -10, 0, 0, 10, 0, -10 };
        // Split points are D (0,0,5) and E (0,0,-5)
        Intersector.splitTriangle(triangle, plane, split);
        assertTrue(split.numBack == 1);
        assertTrue(split.numFront == 2);
        assertTrue(split.total == 3);
        // There is only one way to triangulate back
        assertTrue(triangleEquals(split.back, 0, 3, new float[] { 0, 0, 5, -10, 0, 0, 0, 0, -5 }));
        // There are two ways to triangulate front
        // ADE AEC
        float[][] firstWay = { { 10, 0, 10, 0, 0, 5, 0, 0, -5 }, { 10, 0, 10, 0, 0, -5, 10, 0, -10 } };
        // ADC DEC
        float[][] secondWay = { { 10, 0, 10, 0, 0, 5, 10, 0, -10 }, { 0, 0, 5, 0, 0, -5, 10, 0, -10 } };
        float[] base = split.front;
        boolean first = (triangleEquals(base, 0, 3, firstWay[0]) && triangleEquals(base, 9, 3, firstWay[1])) || (triangleEquals(base, 0, 3, firstWay[1]) && triangleEquals(base, 9, 3, firstWay[0]));
        boolean second = (triangleEquals(base, 0, 3, secondWay[0]) && triangleEquals(base, 9, 3, secondWay[1])) || (triangleEquals(base, 0, 3, secondWay[1]) && triangleEquals(base, 9, 3, secondWay[0]));
        assertTrue("Either first or second way must be right (first: " + first + ", second: " + second + ")", first ^ second);
    }
}
