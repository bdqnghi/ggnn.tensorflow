@Override
public boolean zoom(float originalDistance, float currentDistance) {
    float ratio = originalDistance / currentDistance;
    camera.zoom = initialScale * ratio;
    System.out.println(camera.zoom);
    return false;
}
