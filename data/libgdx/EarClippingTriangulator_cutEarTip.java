private void cutEarTip(int earTipIndex) {
    short[] indices = this.indices;
    ShortArray triangles = this.triangles;
    triangles.add(indices[previousIndex(earTipIndex)]);
    triangles.add(indices[earTipIndex]);
    triangles.add(indices[nextIndex(earTipIndex)]);
    indicesArray.removeIndex(earTipIndex);
    vertexTypes.removeIndex(earTipIndex);
    vertexCount--;
}
