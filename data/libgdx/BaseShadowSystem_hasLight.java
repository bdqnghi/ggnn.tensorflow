@Override
public boolean hasLight(PointLight point) {
    if (pointCameras.containsKey(point))
        return true;
    return false;
}
