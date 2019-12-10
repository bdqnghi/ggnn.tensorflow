private void cleanup() {
    vectorPool.freeAll(vectorArray);
    vectorArray.clear();
    matrices4Pool.freeAll(matrices4Array);
    matrices4Array.clear();
}
