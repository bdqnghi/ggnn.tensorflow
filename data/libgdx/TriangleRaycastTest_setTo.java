public void setTo(Vector3 value) {
    tmpSetTo.setValue(value.x, value.y, value.z);
    super.setTo(tmpSetTo);
}
