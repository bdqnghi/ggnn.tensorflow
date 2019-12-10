protected void update(float percent) {
    float r = startR + (end.r - startR) * percent;
    float g = startG + (end.g - startG) * percent;
    float b = startB + (end.b - startB) * percent;
    float a = startA + (end.a - startA) * percent;
    color.set(r, g, b, a);
}
