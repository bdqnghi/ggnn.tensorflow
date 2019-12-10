@Override
public Camera next() {
    if (currentPass == SECOND_PASS && nbCall > 0)
        firstCallPass2 = false;
    nbCall++;
    return super.next();
}
