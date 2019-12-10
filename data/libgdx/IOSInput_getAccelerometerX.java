// need to retain a reference so GC doesn't get right of the
// object passed to the native thread
// VoidBlock2<CMAccelerometerData, NSError> accelVoid = null;
// private void setupAccelerometer () {
// if (config.useAccelerometer) {
// motionManager.setAccelerometerUpdateInterval(config.accelerometerUpdate);
// accelVoid = new VoidBlock2<CMAccelerometerData, NSError>() {
// @Override
// public void invoke(CMAccelerometerData accelData, NSError error) {
// updateAccelerometer(accelData);
// }
// };
// motionManager.startAccelerometerUpdates(new NSOperationQueue(), accelVoid);
// }
// }
// need to retain a reference so GC doesn't get right of the
// object passed to the native thread
// VoidBlock2<CMMagnetometerData, NSError> magnetVoid = null;
// private void setupMagnetometer () {
// if (motionManager.isMagnetometerAvailable() && config.useCompass) compassSupported = true;
// else return;
// motionManager.setMagnetometerUpdateInterval(config.magnetometerUpdate);
// magnetVoid = new VoidBlock2<CMMagnetometerData, NSError>() {
// @Override
// public void invoke(CMMagnetometerData magnetData, NSError error) {
// updateRotation(magnetData);
// }
// };
// motionManager.startMagnetometerUpdates(new NSOperationQueue(), magnetVoid);
// }
// private void updateAccelerometer (CMAccelerometerData data) {
// float x = (float) data.getAcceleration().x() * 10f;
// float y = (float) data.getAcceleration().y() * 10f;
// float z = (float) data.getAcceleration().z() * 10f;
// acceleration[0] = -x;
// acceleration[1] = -y;
// acceleration[2] = -z;
// }
// 
// private void updateRotation (CMMagnetometerData data) {
// final float eX = (float) data.getMagneticField().x();
// final float eY = (float) data.getMagneticField().y();
// final float eZ = (float) data.getMagneticField().z();
// 
// float gX = acceleration[0];
// float gY = acceleration[1];
// float gZ = acceleration[2];
// 
// float cX = eY * gZ - eZ * gY;
// float cY = eZ * gX - eX * gZ;
// float cZ = eX * gY - eY * gX;
// 
// final float normal = (float) Math.sqrt(cX * cX + cY * cY + cZ * cZ);
// final float invertC = 1.0f / normal;
// cX *= invertC;
// cY *= invertC;
// cZ *= invertC;
// final float invertG = 1.0f / (float) Math.sqrt(gX * gX + gY * gY + gZ * gZ);
// gX *= invertG;
// gY *= invertG;
// gZ *= invertG;
// final float mX = gY * cZ - gZ * cY;
// final float mY = gZ * cX - gX * cZ;
// final float mZ = gX * cY - gY * cX;
// 
// R[0] = cX;	R[1] = cY;	R[2] = cZ;
// R[3] = mX;	R[4] = mY;	R[5] = mZ;
// R[6] = gX;	R[7] = gY;	R[8] = gZ;
// 
// rotation[0] = (float) Math.atan2(R[1], R[4]) * MathUtils.radDeg;
// rotation[1] = (float) Math.asin(-R[7]) * MathUtils.radDeg;
// rotation[2] = (float) Math.atan2(-R[6], R[8]) * MathUtils.radDeg;
// }
@Override
public float getAccelerometerX() {
    return acceleration[0];
}
