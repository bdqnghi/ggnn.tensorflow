@Override
public Vector3 mulAdd(Vector3 vec, Vector3 mulVec) {
    this.x += vec.x * mulVec.x;
    this.y += vec.y * mulVec.y;
    this.z += vec.z * mulVec.z;
    return this;
}
