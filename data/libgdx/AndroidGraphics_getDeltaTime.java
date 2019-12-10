/**
 * {@inheritDoc}
 */
@Override
public float getDeltaTime() {
    return mean.getMean() == 0 ? deltaTime : mean.getMean();
}
