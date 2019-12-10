public static float btAdjustAngleToLimits(float angleInRadians, float angleLowerLimitInRadians, float angleUpperLimitInRadians) {
    return DynamicsJNI.btAdjustAngleToLimits(angleInRadians, angleLowerLimitInRadians, angleUpperLimitInRadians);
}
