public void setUpperLimit(float ang1max, float ang2max) {
    DynamicsJNI.btUniversalConstraint_setUpperLimit(swigCPtr, this, ang1max, ang2max);
}
