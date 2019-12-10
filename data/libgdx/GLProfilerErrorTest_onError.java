@Override
public void onError(int error) {
    if (error == GL20.GL_INVALID_VALUE) {
        message = "Correctly raised GL_INVALID_VALUE";
    } else {
        message = "Raised error but something unexpected: " + error;
    }
}
