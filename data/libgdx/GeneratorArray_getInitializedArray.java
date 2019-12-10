protected VoronoiDiagram.Generator[] getInitializedArray(int length) {
    final VoronoiDiagram.Generator[] ray = new VoronoiDiagram.Generator[length];
    for (int i = 0; i < ray.length; i++) {
        ray[i] = new VoronoiDiagram.Generator();
    }
    return ray;
}
