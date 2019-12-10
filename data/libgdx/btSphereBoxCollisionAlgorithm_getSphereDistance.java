public boolean getSphereDistance(btCollisionObjectWrapper boxObjWrap, Vector3 v3PointOnBox, Vector3 normal, SWIGTYPE_p_float penetrationDepth, Vector3 v3SphereCenter, float fRadius, float maxContactDistance) {
    return CollisionJNI.btSphereBoxCollisionAlgorithm_getSphereDistance(swigCPtr, this, btCollisionObjectWrapper.getCPtr(boxObjWrap), boxObjWrap, v3PointOnBox, normal, SWIGTYPE_p_float.getCPtr(penetrationDepth), v3SphereCenter, fRadius, maxContactDistance);
}
