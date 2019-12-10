// / Computes the ratio of used surface area.
private float getOccupancy() {
    int usedSurfaceArea = 0;
    for (int i = 0; i < usedRectangles.size; i++) usedSurfaceArea += usedRectangles.get(i).width * usedRectangles.get(i).height;
    return (float) usedSurfaceArea / (binWidth * binHeight);
}
