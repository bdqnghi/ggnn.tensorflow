@Override
public boolean tap(float x, float y, int count, int button) {
    state = (state + 1) % 3;
    if ((state & FRUSTUM_CAM) == FRUSTUM_CAM)
        camera = frustumCam;
    else
        camera = overviewCam;
    return true;
}
