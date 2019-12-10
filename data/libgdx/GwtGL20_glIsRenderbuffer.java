@Override
public boolean glIsRenderbuffer(int renderbuffer) {
    return gl.isRenderbuffer(renderBuffers.get(renderbuffer));
}
