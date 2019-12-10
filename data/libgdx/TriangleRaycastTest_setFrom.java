public void setFrom(Vector3 value) {
    tmpSetFrom.setValue(value.x, value.y, value.z);
    super.setFrom(tmpSetFrom);
}
